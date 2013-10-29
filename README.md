Intel Cloud Services Plugin - Identity - Phonegap
=====================

Documentation
=====================

Intel functions
=====================

<center><h2>intel.initialize(clientId, secretId, scopes, redirectUrl, isLogged)</h2></center>

Initialize the credentials for login. This function receives the following parameters:

- </b>clientId</b>: developer's client ID obtained from Developer Portal.
- </b>secretId</b>: developer's client secret associated with the client ID.
- </b>scope</b>: scope/s required for the application.
- </b>redirectUri</b>: redirect URI you configured in your Developer Account for login success.
- </b>isLogged</b>: callback function. This callback function returns one parameter reporting if the user is already logged in.

<center><h2>intel.login(callback, errorCallback)</h2></center>

Authenticates users with the Intel Identity Services using an Intel account.

- <b>callback</b>: This function will be executed if the user has been logged successful.
- <b>errorCallback</b>: This function returns one parameter reporting the produced error when the user was logging in.

<center><h2>intel.logout(callback, errorCallback)</h2></center>

Logs a user out of the services by removing the token from the current session.

- <b>callback</b>: This function will be executed if the session has been closed successful.
- <b>errorCallback</b>: This function returns one parameter reporting the produced error when the user was closing the session.