namespace Interfaces
{
    public class User : IUser
    {
        public string name;
        public string email;

        public bool Login(string name, string password)
        {
            return true;
        }
    }
}
