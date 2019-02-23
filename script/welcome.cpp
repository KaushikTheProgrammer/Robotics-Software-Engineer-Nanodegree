#include <gazebo/gazebo.hh>

namespace gazebo
{
  class BuildMyWorldPlugin : public WorldPlugin
  {
    public: BuildMyWorldPlugin() : WorldPlugin()
            {
              printf("Welcome to Kaushik's ROS World\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(BuildMyWorldPlugin)
}
