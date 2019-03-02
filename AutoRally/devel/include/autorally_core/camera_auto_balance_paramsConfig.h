//#line 2 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
// 
// File autogenerated for the autorally_core package 
// by the dynamic_reconfigure package.
// Please do not edit.
// 
// ********************************************************/

#ifndef __autorally_core__CAMERA_AUTO_BALANCE_PARAMSCONFIG_H__
#define __autorally_core__CAMERA_AUTO_BALANCE_PARAMSCONFIG_H__

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace autorally_core
{
  class camera_auto_balance_paramsConfigStatics;
  
  class camera_auto_balance_paramsConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l, 
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }
      
      virtual void clamp(camera_auto_balance_paramsConfig &config, const camera_auto_balance_paramsConfig &max, const camera_auto_balance_paramsConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const camera_auto_balance_paramsConfig &config1, const camera_auto_balance_paramsConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, camera_auto_balance_paramsConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const camera_auto_balance_paramsConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, camera_auto_balance_paramsConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const camera_auto_balance_paramsConfig &config) const = 0;
      virtual void getValue(const camera_auto_balance_paramsConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;
    
    template <class T>
    class ParamDescription : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string name, std::string type, uint32_t level, 
          std::string description, std::string edit_method, T camera_auto_balance_paramsConfig::* f) :
        AbstractParamDescription(name, type, level, description, edit_method),
        field(f)
      {}

      T (camera_auto_balance_paramsConfig::* field);

      virtual void clamp(camera_auto_balance_paramsConfig &config, const camera_auto_balance_paramsConfig &max, const camera_auto_balance_paramsConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;
        
        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const camera_auto_balance_paramsConfig &config1, const camera_auto_balance_paramsConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, camera_auto_balance_paramsConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const camera_auto_balance_paramsConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, camera_auto_balance_paramsConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const camera_auto_balance_paramsConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const camera_auto_balance_paramsConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, camera_auto_balance_paramsConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    template<class T, class PT>
    class GroupDescription : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string name, std::string type, int parent, int id, bool s, T PT::* f) : AbstractGroupDescription(name, type, parent, id, s), field(f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, camera_auto_balance_paramsConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<camera_auto_balance_paramsConfig::AbstractGroupDescriptionConstPtr> groups;
    };
    
class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(camera_auto_balance_paramsConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("roi_x_top_left"==(*_i)->name){roi_x_top_left = boost::any_cast<int>(val);}
        if("roi_y_top_left"==(*_i)->name){roi_y_top_left = boost::any_cast<int>(val);}
        if("roi_x_bottom_right"==(*_i)->name){roi_x_bottom_right = boost::any_cast<int>(val);}
        if("roi_y_bottom_right"==(*_i)->name){roi_y_bottom_right = boost::any_cast<int>(val);}
        if("msvGrayReference"==(*_i)->name){msvGrayReference = boost::any_cast<double>(val);}
        if("kShutter"==(*_i)->name){kShutter = boost::any_cast<double>(val);}
        if("kGain"==(*_i)->name){kGain = boost::any_cast<double>(val);}
        if("show_roi_and_hist"==(*_i)->name){show_roi_and_hist = boost::any_cast<bool>(val);}
      }
    }

    int roi_x_top_left;
int roi_y_top_left;
int roi_x_bottom_right;
int roi_y_bottom_right;
double msvGrayReference;
double kShutter;
double kGain;
bool show_roi_and_hist;

    bool state;
    std::string name;

    
}groups;



//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int roi_x_top_left;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int roi_y_top_left;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int roi_x_bottom_right;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      int roi_y_bottom_right;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double msvGrayReference;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double kShutter;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double kGain;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      bool show_roi_and_hist;
//#line 218 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("camera_auto_balance_paramsConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }
    
    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }
    
    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const camera_auto_balance_paramsConfig &__max__ = __getMax__();
      const camera_auto_balance_paramsConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const camera_auto_balance_paramsConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }
    
    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const camera_auto_balance_paramsConfig &__getDefault__();
    static const camera_auto_balance_paramsConfig &__getMax__();
    static const camera_auto_balance_paramsConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();
    
  private:
    static const camera_auto_balance_paramsConfigStatics *__get_statics__();
  };
  
  template <> // Max and min are ignored for strings.
  inline void camera_auto_balance_paramsConfig::ParamDescription<std::string>::clamp(camera_auto_balance_paramsConfig &config, const camera_auto_balance_paramsConfig &max, const camera_auto_balance_paramsConfig &min) const
  {
    return;
  }

  class camera_auto_balance_paramsConfigStatics
  {
    friend class camera_auto_balance_paramsConfig;
    
    camera_auto_balance_paramsConfigStatics()
    {
camera_auto_balance_paramsConfig::GroupDescription<camera_auto_balance_paramsConfig::DEFAULT, camera_auto_balance_paramsConfig> Default("Default", "", 0, 0, true, &camera_auto_balance_paramsConfig::groups);
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.roi_x_top_left = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.roi_x_top_left = 1279;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.roi_x_top_left = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_x_top_left", "int", 0, "Top left vertex X position of ROI", "", &camera_auto_balance_paramsConfig::roi_x_top_left)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_x_top_left", "int", 0, "Top left vertex X position of ROI", "", &camera_auto_balance_paramsConfig::roi_x_top_left)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.roi_y_top_left = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.roi_y_top_left = 1023;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.roi_y_top_left = 500;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_y_top_left", "int", 0, "Top left vertex Y position of ROI", "", &camera_auto_balance_paramsConfig::roi_y_top_left)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_y_top_left", "int", 0, "Top left vertex Y position of ROI", "", &camera_auto_balance_paramsConfig::roi_y_top_left)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.roi_x_bottom_right = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.roi_x_bottom_right = 1280;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.roi_x_bottom_right = 1280;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_x_bottom_right", "int", 0, "Bottom right vertex X position of ROI", "", &camera_auto_balance_paramsConfig::roi_x_bottom_right)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_x_bottom_right", "int", 0, "Bottom right vertex X position of ROI", "", &camera_auto_balance_paramsConfig::roi_x_bottom_right)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.roi_y_bottom_right = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.roi_y_bottom_right = 1024;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.roi_y_bottom_right = 1000;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_y_bottom_right", "int", 0, "Bottom right vertex Y position of ROI", "", &camera_auto_balance_paramsConfig::roi_y_bottom_right)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<int>("roi_y_bottom_right", "int", 0, "Bottom right vertex Y position of ROI", "", &camera_auto_balance_paramsConfig::roi_y_bottom_right)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.msvGrayReference = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.msvGrayReference = 255.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.msvGrayReference = 120.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("msvGrayReference", "double", 0, "Setpoint for exposure calibration", "", &camera_auto_balance_paramsConfig::msvGrayReference)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("msvGrayReference", "double", 0, "Setpoint for exposure calibration", "", &camera_auto_balance_paramsConfig::msvGrayReference)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.kShutter = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.kShutter = 0.1;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.kShutter = 0.0005;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("kShutter", "double", 0, "Parameter that controls how fast shutter can change", "", &camera_auto_balance_paramsConfig::kShutter)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("kShutter", "double", 0, "Parameter that controls how fast shutter can change", "", &camera_auto_balance_paramsConfig::kShutter)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.kGain = 0.0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.kGain = 0.1;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.kGain = 0.0005;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("kGain", "double", 0, "Parameter that controls how fast gain can change", "", &camera_auto_balance_paramsConfig::kGain)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<double>("kGain", "double", 0, "Parameter that controls how fast gain can change", "", &camera_auto_balance_paramsConfig::kGain)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.show_roi_and_hist = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.show_roi_and_hist = 1;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.show_roi_and_hist = 0;
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<bool>("show_roi_and_hist", "bool", 0, "Enable/Disable display of ROI and histogram of ROI", "", &camera_auto_balance_paramsConfig::show_roi_and_hist)));
//#line 280 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr(new camera_auto_balance_paramsConfig::ParamDescription<bool>("show_roi_and_hist", "bool", 0, "Enable/Disable display of ROI and histogram of ROI", "", &camera_auto_balance_paramsConfig::show_roi_and_hist)));
//#line 235 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 235 "/opt/ros/indigo/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(camera_auto_balance_paramsConfig::AbstractGroupDescriptionConstPtr(new camera_auto_balance_paramsConfig::GroupDescription<camera_auto_balance_paramsConfig::DEFAULT, camera_auto_balance_paramsConfig>(Default)));
//#line 353 "/opt/ros/indigo/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<camera_auto_balance_paramsConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__); 
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__); 
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__); 
    }
    std::vector<camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<camera_auto_balance_paramsConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    camera_auto_balance_paramsConfig __max__;
    camera_auto_balance_paramsConfig __min__;
    camera_auto_balance_paramsConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const camera_auto_balance_paramsConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static camera_auto_balance_paramsConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &camera_auto_balance_paramsConfig::__getDescriptionMessage__() 
  {
    return __get_statics__()->__description_message__;
  }

  inline const camera_auto_balance_paramsConfig &camera_auto_balance_paramsConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }
  
  inline const camera_auto_balance_paramsConfig &camera_auto_balance_paramsConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }
  
  inline const camera_auto_balance_paramsConfig &camera_auto_balance_paramsConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }
  
  inline const std::vector<camera_auto_balance_paramsConfig::AbstractParamDescriptionConstPtr> &camera_auto_balance_paramsConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<camera_auto_balance_paramsConfig::AbstractGroupDescriptionConstPtr> &camera_auto_balance_paramsConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const camera_auto_balance_paramsConfigStatics *camera_auto_balance_paramsConfig::__get_statics__()
  {
    const static camera_auto_balance_paramsConfigStatics *statics;
  
    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = camera_auto_balance_paramsConfigStatics::get_instance();
    
    return statics;
  }


}

#endif // __CAMERA_AUTO_BALANCE_PARAMSRECONFIGURATOR_H__
