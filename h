usage: openstack [--version] [-v | -q] [--log-file [3mLOG_FILE[0m] [-h] [--debug]
                 [--os-cloud [3m<cloud-config-name>[0m] [--os-region-name [3m<auth-region-name>[0m]
                 [--os-cacert [3m<ca-bundle-file>[0m] [--os-cert [3m<certificate-file>[0m]
                 [--os-key [3m<key-file>[0m] [--verify | --insecure] [--os-default-domain [3m<auth-domain>[0m]
                 [--os-interface [3m<interface>[0m] [--os-service-provider [3m<service_provider>[0m]
                 [--os-remote-project-name [3m<remote_project_name>[0m | --os-remote-project-id [3m<remote_project_id>[0m]
                 [--os-remote-project-domain-name [3m<remote_project_domain_name>[0m | --os-remote-project-domain-id [3m<remote_project_domain_id>[0m]
                 [--timing] [--os-beta-command] [--os-compute-api-version [3m<compute-api-version>[0m]
                 [--os-identity-api-version [3m<identity-api-version>[0m]
                 [--os-image-api-version [3m<image-api-version>[0m]
                 [--os-network-api-version [3m<network-api-version>[0m]
                 [--os-object-api-version [3m<object-api-version>[0m]
                 [--os-volume-api-version [3m<volume-api-version>[0m] [--os-auth-type [3m<auth-type>[0m]
                 [--os-auth-url [3m<auth-auth-url>[0m] [--os-system-scope [3m<auth-system-scope>[0m]
                 [--os-domain-id [3m<auth-domain-id>[0m] [--os-domain-name [3m<auth-domain-name>[0m]
                 [--os-project-id [3m<auth-project-id>[0m] [--os-project-name [3m<auth-project-name>[0m]
                 [--os-project-domain-id [3m<auth-project-domain-id>[0m]
                 [--os-project-domain-name [3m<auth-project-domain-name>[0m] [--os-trust-id [3m<auth-trust-id>[0m]
                 [--os-auth-methods [3m<auth-auth-methods>[0m]
                 [--os-default-domain-id [3m<auth-default-domain-id>[0m]
                 [--os-default-domain-name [3m<auth-default-domain-name>[0m] [--os-token [3m<auth-token>[0m]
                 [--os-user-id [3m<auth-user-id>[0m] [--os-username [3m<auth-username>[0m]
                 [--os-user-domain-id [3m<auth-user-domain-id>[0m]
                 [--os-user-domain-name [3m<auth-user-domain-name>[0m] [--os-password [3m<auth-password>[0m]
                 [--os-identity-provider [3m<auth-identity-provider>[0m] [--os-protocol [3m<auth-protocol>[0m]
                 [--os-client-id [3m<auth-client-id>[0m] [--os-client-secret [3m<auth-client-secret>[0m]
                 [--os-openid-scope [3m<auth-openid-scope>[0m]
                 [--os-access-token-endpoint [3m<auth-access-token-endpoint>[0m]
                 [--os-discovery-endpoint [3m<auth-discovery-endpoint>[0m]
                 [--os-access-token-type [3m<auth-access-token-type>[0m]
                 [--os-redirect-uri [3m<auth-redirect-uri>[0m] [--os-code [3m<auth-code>[0m]
                 [--os-application-credential-secret [3m<auth-application-credential-secret>[0m]
                 [--os-application-credential-id [3m<auth-application-credential-id>[0m]
                 [--os-application-credential-name [3m<auth-application-credential-name>[0m]
                 [--os-endpoint [3m<auth-endpoint>[0m] [--os-passcode [3m<auth-passcode>[0m]
                 [--os-access-token [3m<auth-access-token>[0m] [--os-oauth2-endpoint [3m<auth-oauth2-endpoint>[0m]
                 [--os-oauth2-client-id [3m<auth-oauth2-client-id>[0m] [--os-idp-otp-key [3m<auth-idp-otp-key>[0m]
                 [--os-oauth2-client-secret [3m<auth-oauth2-client-secret>[0m]
                 [--os-device-authorization-endpoint [3m<auth-device-authorization-endpoint>[0m]
                 [--os-code-challenge-method [3m<auth-code-challenge-method>[0m]

Command-line interface to the OpenStack APIs

[4moptions[0m:
  --version             show program's version number and exit
  -v, --verbose         Increase verbosity of output. Can be repeated.
  -q, --quiet           Suppress output except warnings and errors.
  --log-file [3mLOG_FILE[0m
                        Specify a file to log output. Disabled by default.
  -h, --help            Show help message and exit.
  --debug               Show tracebacks on errors.
  --os-cloud [3m<cloud-config-name>[0m
                        Cloud name in clouds.yaml (Env: OS_CLOUD)
  --os-region-name [3m<auth-region-name>[0m
                        Authentication region name (Env: OS_REGION_NAME)
  --os-cacert [3m<ca-bundle-file>[0m
                        CA certificate bundle file (Env: OS_CACERT)
  --os-cert [3m<certificate-file>[0m
                        Client certificate bundle file (Env: OS_CERT)
  --os-key [3m<key-file>[0m
                        Client certificate key file (Env: OS_KEY)
  --verify              Verify server certificate (default)
  --insecure            Disable server certificate verification
  --os-default-domain [3m<auth-domain>[0m
                        Default domain ID, default=default. (Env: OS_DEFAULT_DOMAIN)
  --os-interface [3m<interface>[0m
                        Select an interface type. Valid interface types: [admin, public, internal]. default=public,
                        (Env: OS_INTERFACE)
  --os-service-provider [3m<service_provider>[0m
                        Authenticate with and perform the command on a service provider using Keystone-to-keystone
                        federation. Must also specify the remote project option.
  --os-remote-project-name [3m<remote_project_name>[0m
                        Project name when authenticating to a service provider if using Keystone-to-Keystone
                        federation.
  --os-remote-project-id [3m<remote_project_id>[0m
                        Project ID when authenticating to a service provider if using Keystone-to-Keystone federation.
  --os-remote-project-domain-name [3m<remote_project_domain_name>[0m
                        Domain name of the project when authenticating to a service provider if using Keystone-to-
                        Keystone federation.
  --os-remote-project-domain-id [3m<remote_project_domain_id>[0m
                        Domain ID of the project when authenticating to a service provider if using Keystone-to-
                        Keystone federation.
  --timing              Print API call timing info
  --os-beta-command     Enable beta commands which are subject to change
  --os-compute-api-version [3m<compute-api-version>[0m
                        Compute API version, default=2.1 (Env: OS_COMPUTE_API_VERSION)
  --os-identity-api-version [3m<identity-api-version>[0m
                        Identity API version, default=3 (Env: OS_IDENTITY_API_VERSION)
  --os-image-api-version [3m<image-api-version>[0m
                        Image API version, default=2 (Env: OS_IMAGE_API_VERSION)
  --os-network-api-version [3m<network-api-version>[0m
                        Network API version, default=2.0 (Env: OS_NETWORK_API_VERSION)
  --os-object-api-version [3m<object-api-version>[0m
                        Object API version, default=1 (Env: OS_OBJECT_API_VERSION)
  --os-volume-api-version [3m<volume-api-version>[0m
                        Volume API version, default=3 (Env: OS_VOLUME_API_VERSION)
  --os-auth-type [3m<auth-type>[0m
                        Select an authentication type. Available types: v3multifactor, token, v3token, password,
                        v3oidcauthcode, v3tokenlessauth, v3applicationcredential, noauth, v3totp, v3oidcaccesstoken,
                        admin_token, v3oauth2mtlsclientcredential, v3oidcclientcredentials, v3oidcpassword,
                        v2password, v2token, v3oauth2clientcredential, v3oidcdeviceauthz, http_basic, v3password,
                        none. Default: selected based on --os-username/--os-token (Env: OS_AUTH_TYPE)
  --os-auth-url [3m<auth-auth-url>[0m
                        With v3multifactor: Authentication URL With token: Authentication URL With v3token:
                        Authentication URL With password: Authentication URL With v3oidcauthcode: Authentication URL
                        With v3tokenlessauth: Authentication URL With v3applicationcredential: Authentication URL With
                        v3totp: Authentication URL With v3oidcaccesstoken: Authentication URL With
                        v3oauth2mtlsclientcredential: Authentication URL With v3oidcclientcredentials: Authentication
                        URL With v3oidcpassword: Authentication URL With v2password: Authentication URL With v2token:
                        Authentication URL With v3oauth2clientcredential: Authentication URL With v3oidcdeviceauthz:
                        Authentication URL With v3password: Authentication URL (Env: OS_AUTH_URL)
  --os-system-scope [3m<auth-system-scope>[0m
                        With v3multifactor: Scope for system operations With token: Scope for system operations With
                        v3token: Scope for system operations With password: Scope for system operations With
                        v3oidcauthcode: Scope for system operations With v3applicationcredential: Scope for system
                        operations With v3totp: Scope for system operations With v3oidcaccesstoken: Scope for system
                        operations With v3oauth2mtlsclientcredential: Scope for system operations With
                        v3oidcclientcredentials: Scope for system operations With v3oidcpassword: Scope for system
                        operations With v3oauth2clientcredential: Scope for system operations With v3oidcdeviceauthz:
                        Scope for system operations With v3password: Scope for system operations (Env:
                        OS_SYSTEM_SCOPE)
  --os-domain-id [3m<auth-domain-id>[0m
                        With v3multifactor: Domain ID to scope to With token: Domain ID to scope to With v3token:
                        Domain ID to scope to With password: Domain ID to scope to With v3oidcauthcode: Domain ID to
                        scope to With v3tokenlessauth: Domain ID to scope to With v3applicationcredential: Domain ID
                        to scope to With v3totp: Domain ID to scope to With v3oidcaccesstoken: Domain ID to scope to
                        With v3oauth2mtlsclientcredential: Domain ID to scope to With v3oidcclientcredentials: Domain
                        ID to scope to With v3oidcpassword: Domain ID to scope to With v3oauth2clientcredential:
                        Domain ID to scope to With v3oidcdeviceauthz: Domain ID to scope to With v3password: Domain ID
                        to scope to (Env: OS_DOMAIN_ID)
  --os-domain-name [3m<auth-domain-name>[0m
                        With v3multifactor: Domain name to scope to With token: Domain name to scope to With v3token:
                        Domain name to scope to With password: Domain name to scope to With v3oidcauthcode: Domain
                        name to scope to With v3tokenlessauth: Domain name to scope to With v3applicationcredential:
                        Domain name to scope to With v3totp: Domain name to scope to With v3oidcaccesstoken: Domain
                        name to scope to With v3oauth2mtlsclientcredential: Domain name to scope to With
                        v3oidcclientcredentials: Domain name to scope to With v3oidcpassword: Domain name to scope to
                        With v3oauth2clientcredential: Domain name to scope to With v3oidcdeviceauthz: Domain name to
                        scope to With v3password: Domain name to scope to (Env: OS_DOMAIN_NAME)
  --os-project-id [3m<auth-project-id>[0m
                        With v3multifactor: Project ID to scope to With token: Project ID to scope to With v3token:
                        Project ID to scope to With password: Project ID to scope to With v3oidcauthcode: Project ID
                        to scope to With v3tokenlessauth: Project ID to scope to With v3applicationcredential: Project
                        ID to scope to With noauth: Project ID With v3totp: Project ID to scope to With
                        v3oidcaccesstoken: Project ID to scope to With v3oauth2mtlsclientcredential: Project ID to
                        scope to With v3oidcclientcredentials: Project ID to scope to With v3oidcpassword: Project ID
                        to scope to With v3oauth2clientcredential: Project ID to scope to With v3oidcdeviceauthz:
                        Project ID to scope to With v3password: Project ID to scope to (Env: OS_PROJECT_ID)
  --os-project-name [3m<auth-project-name>[0m
                        With v3multifactor: Project name to scope to With token: Project name to scope to With
                        v3token: Project name to scope to With password: Project name to scope to With v3oidcauthcode:
                        Project name to scope to With v3tokenlessauth: Project name to scope to With
                        v3applicationcredential: Project name to scope to With v3totp: Project name to scope to With
                        v3oidcaccesstoken: Project name to scope to With v3oauth2mtlsclientcredential: Project name to
                        scope to With v3oidcclientcredentials: Project name to scope to With v3oidcpassword: Project
                        name to scope to With v3oauth2clientcredential: Project name to scope to With
                        v3oidcdeviceauthz: Project name to scope to With v3password: Project name to scope to (Env:
                        OS_PROJECT_NAME)
  --os-project-domain-id [3m<auth-project-domain-id>[0m
                        With v3multifactor: Domain ID containing project With token: Domain ID containing project With
                        v3token: Domain ID containing project With password: Domain ID containing project With
                        v3oidcauthcode: Domain ID containing project With v3tokenlessauth: Domain ID containing
                        project With v3applicationcredential: Domain ID containing project With v3totp: Domain ID
                        containing project With v3oidcaccesstoken: Domain ID containing project With
                        v3oauth2mtlsclientcredential: Domain ID containing project With v3oidcclientcredentials:
                        Domain ID containing project With v3oidcpassword: Domain ID containing project With
                        v3oauth2clientcredential: Domain ID containing project With v3oidcdeviceauthz: Domain ID
                        containing project With v3password: Domain ID containing project (Env: OS_PROJECT_DOMAIN_ID)
  --os-project-domain-name [3m<auth-project-domain-name>[0m
                        With v3multifactor: Domain name containing project With token: Domain name containing project
                        With v3token: Domain name containing project With password: Domain name containing project
                        With v3oidcauthcode: Domain name containing project With v3tokenlessauth: Domain name
                        containing project With v3applicationcredential: Domain name containing project With v3totp:
                        Domain name containing project With v3oidcaccesstoken: Domain name containing project With
                        v3oauth2mtlsclientcredential: Domain name containing project With v3oidcclientcredentials:
                        Domain name containing project With v3oidcpassword: Domain name containing project With
                        v3oauth2clientcredential: Domain name containing project With v3oidcdeviceauthz: Domain name
                        containing project With v3password: Domain name containing project (Env:
                        OS_PROJECT_DOMAIN_NAME)
  --os-trust-id [3m<auth-trust-id>[0m
                        With v3multifactor: ID of the trust to use as a trustee use With token: ID of the trust to use
                        as a trustee use With v3token: ID of the trust to use as a trustee use With password: ID of
                        the trust to use as a trustee use With v3oidcauthcode: ID of the trust to use as a trustee use
                        With v3applicationcredential: ID of the trust to use as a trustee use With v3totp: ID of the
                        trust to use as a trustee use With v3oidcaccesstoken: ID of the trust to use as a trustee use
                        With v3oauth2mtlsclientcredential: ID of the trust to use as a trustee use With
                        v3oidcclientcredentials: ID of the trust to use as a trustee use With v3oidcpassword: ID of
                        the trust to use as a trustee use With v2password: ID of the trust to use as a trustee use
                        With v2token: ID of the trust to use as a trustee use With v3oauth2clientcredential: ID of the
                        trust to use as a trustee use With v3oidcdeviceauthz: ID of the trust to use as a trustee use
                        With v3password: ID of the trust to use as a trustee use (Env: OS_TRUST_ID)
  --os-auth-methods [3m<auth-auth-methods>[0m
                        With v3multifactor: Methods to authenticate with. (Env: OS_AUTH_METHODS)
  --os-default-domain-id [3m<auth-default-domain-id>[0m
                        With token: Optional domain ID to use with v3 and v2 parameters. It will be used for both the
                        user and project domain in v3 and ignored in v2 authentication. With password: Optional domain
                        ID to use with v3 and v2 parameters. It will be used for both the user and project domain in
                        v3 and ignored in v2 authentication. (Env: OS_DEFAULT_DOMAIN_ID)
  --os-default-domain-name [3m<auth-default-domain-name>[0m
                        With token: Optional domain name to use with v3 API and v2 parameters. It will be used for
                        both the user and project domain in v3 and ignored in v2 authentication. With password:
                        Optional domain name to use with v3 API and v2 parameters. It will be used for both the user
                        and project domain in v3 and ignored in v2 authentication. (Env: OS_DEFAULT_DOMAIN_NAME)
  --os-token [3m<auth-token>[0m
                        With token: Token to authenticate with With v3token: Token to authenticate with With
                        admin_token: The token that will always be used With v2token: Token (Env: OS_TOKEN)
  --os-user-id [3m<auth-user-id>[0m
                        With password: User id With v3applicationcredential: User's user ID With noauth: User ID With
                        v3totp: User's user ID With v2password: User ID to login with With v3password: User's user ID
                        (Env: OS_USER_ID)
  --os-username [3m<auth-username>[0m
                        With password: Username With v3applicationcredential: User's username With v3totp: User's
                        username With v3oidcpassword: Username With v2password: Username to login with With
                        http_basic: Username With v3password: User's username (Env: OS_USERNAME)
  --os-user-domain-id [3m<auth-user-domain-id>[0m
                        With password: User's domain id With v3applicationcredential: User's domain ID With v3totp:
                        User's domain ID With v3password: User's domain ID (Env: OS_USER_DOMAIN_ID)
  --os-user-domain-name [3m<auth-user-domain-name>[0m
                        With password: User's domain name With v3applicationcredential: User's domain name With
                        v3totp: User's domain name With v3password: User's domain name (Env: OS_USER_DOMAIN_NAME)
  --os-password [3m<auth-password>[0m
                        With password: User's password With v3oidcpassword: Password With v2password: Password to use
                        With http_basic: User's password With v3password: User's password (Env: OS_PASSWORD)
  --os-identity-provider [3m<auth-identity-provider>[0m
                        With v3oidcauthcode: Identity Provider's name With v3oidcaccesstoken: Identity Provider's name
                        With v3oidcclientcredentials: Identity Provider's name With v3oidcpassword: Identity
                        Provider's name With v3oidcdeviceauthz: Identity Provider's name (Env: OS_IDENTITY_PROVIDER)
  --os-protocol [3m<auth-protocol>[0m
                        With v3oidcauthcode: Protocol for federated plugin With v3oidcaccesstoken: Protocol for
                        federated plugin With v3oidcclientcredentials: Protocol for federated plugin With
                        v3oidcpassword: Protocol for federated plugin With v3oidcdeviceauthz: Protocol for federated
                        plugin (Env: OS_PROTOCOL)
  --os-client-id [3m<auth-client-id>[0m
                        With v3oidcauthcode: OAuth 2.0 Client ID With v3oidcclientcredentials: OAuth 2.0 Client ID
                        With v3oidcpassword: OAuth 2.0 Client ID With v3oidcdeviceauthz: OAuth 2.0 Client ID (Env:
                        OS_CLIENT_ID)
  --os-client-secret [3m<auth-client-secret>[0m
                        With v3oidcauthcode: OAuth 2.0 Client Secret With v3oidcclientcredentials: OAuth 2.0 Client
                        Secret With v3oidcpassword: OAuth 2.0 Client Secret With v3oidcdeviceauthz: OAuth 2.0 Client
                        Secret (Env: OS_CLIENT_SECRET)
  --os-openid-scope [3m<auth-openid-scope>[0m
                        With v3oidcauthcode: OpenID Connect scope that is requested from authorization server. Note
                        that the OpenID Connect specification states that "openid" must be always specified. With
                        v3oidcclientcredentials: OpenID Connect scope that is requested from authorization server.
                        Note that the OpenID Connect specification states that "openid" must be always specified. With
                        v3oidcpassword: OpenID Connect scope that is requested from authorization server. Note that
                        the OpenID Connect specification states that "openid" must be always specified. With
                        v3oidcdeviceauthz: OpenID Connect scope that is requested from authorization server. Note that
                        the OpenID Connect specification states that "openid" must be always specified. (Env:
                        OS_OPENID_SCOPE)
  --os-access-token-endpoint [3m<auth-access-token-endpoint>[0m
                        With v3oidcauthcode: OpenID Connect Provider Token Endpoint. Note that if a discovery document
                        is being passed this option will override the endpoint provided by the server in the discovery
                        document. With v3oidcclientcredentials: OpenID Connect Provider Token Endpoint. Note that if a
                        discovery document is being passed this option will override the endpoint provided by the
                        server in the discovery document. With v3oidcpassword: OpenID Connect Provider Token Endpoint.
                        Note that if a discovery document is being passed this option will override the endpoint
                        provided by the server in the discovery document. With v3oidcdeviceauthz: OpenID Connect
                        Provider Token Endpoint. Note that if a discovery document is being passed this option will
                        override the endpoint provided by the server in the discovery document. (Env:
                        OS_ACCESS_TOKEN_ENDPOINT)
  --os-discovery-endpoint [3m<auth-discovery-endpoint>[0m
                        With v3oidcauthcode: OpenID Connect Discovery Document URL. The discovery document will be
                        used to obtain the values of the access token endpoint and the authentication endpoint. This
                        URL should look like https://idp.example.org/.well-known/openid-configuration With
                        v3oidcclientcredentials: OpenID Connect Discovery Document URL. The discovery document will be
                        used to obtain the values of the access token endpoint and the authentication endpoint. This
                        URL should look like https://idp.example.org/.well-known/openid-configuration With
                        v3oidcpassword: OpenID Connect Discovery Document URL. The discovery document will be used to
                        obtain the values of the access token endpoint and the authentication endpoint. This URL
                        should look like https://idp.example.org/.well-known/openid-configuration With
                        v3oidcdeviceauthz: OpenID Connect Discovery Document URL. The discovery document will be used
                        to obtain the values of the access token endpoint and the authentication endpoint. This URL
                        should look like https://idp.example.org/.well-known/openid-configuration (Env:
                        OS_DISCOVERY_ENDPOINT)
  --os-access-token-type [3m<auth-access-token-type>[0m
                        With v3oidcauthcode: OAuth 2.0 Authorization Server Introspection token type, it is used to
                        decide which type of token will be used when processing token introspection. Valid values are:
                        "access_token" or "id_token" With v3oidcclientcredentials: OAuth 2.0 Authorization Server
                        Introspection token type, it is used to decide which type of token will be used when
                        processing token introspection. Valid values are: "access_token" or "id_token" With
                        v3oidcpassword: OAuth 2.0 Authorization Server Introspection token type, it is used to decide
                        which type of token will be used when processing token introspection. Valid values are:
                        "access_token" or "id_token" (Env: OS_ACCESS_TOKEN_TYPE)
  --os-redirect-uri [3m<auth-redirect-uri>[0m
                        With v3oidcauthcode: OpenID Connect Redirect URL (Env: OS_REDIRECT_URI)
  --os-code [3m<auth-code>[0m
                        With v3oidcauthcode: OAuth 2.0 Authorization Code (Env: OS_CODE)
  --os-application-credential-secret [3m<auth-application-credential-secret>[0m
                        With v3applicationcredential: Application credential auth secret (Env:
                        OS_APPLICATION_CREDENTIAL_SECRET)
  --os-application-credential-id [3m<auth-application-credential-id>[0m
                        With v3applicationcredential: Application credential ID (Env: OS_APPLICATION_CREDENTIAL_ID)
  --os-application-credential-name [3m<auth-application-credential-name>[0m
                        With v3applicationcredential: Application credential name (Env:
                        OS_APPLICATION_CREDENTIAL_NAME)
  --os-endpoint [3m<auth-endpoint>[0m
                        With noauth: Cinder endpoint With admin_token: The endpoint that will always be used With
                        http_basic: The endpoint that will always be used With none: The endpoint that will always be
                        used (Env: OS_ENDPOINT)
  --os-passcode [3m<auth-passcode>[0m
                        With v3totp: User's TOTP passcode (Env: OS_PASSCODE)
  --os-access-token [3m<auth-access-token>[0m
                        With v3oidcaccesstoken: OAuth 2.0 Access Token (Env: OS_ACCESS_TOKEN)
  --os-oauth2-endpoint [3m<auth-oauth2-endpoint>[0m
                        With v3oauth2mtlsclientcredential: Endpoint for OAuth2.0 Mutual-TLS Authorization With
                        v3oauth2clientcredential: Endpoint for OAuth2.0 (Env: OS_OAUTH2_ENDPOINT)
  --os-oauth2-client-id [3m<auth-oauth2-client-id>[0m
                        With v3oauth2mtlsclientcredential: Client credential ID for OAuth2.0 Mutual-TLS Authorization
                        With v3oauth2clientcredential: Client id for OAuth2.0 (Env: OS_OAUTH2_CLIENT_ID)
  --os-idp-otp-key [3m<auth-idp-otp-key>[0m
                        With v3oidcpassword: A key to be used in the Identity Provider access token endpoint to pass
                        the OTP value. E.g. totp (Env: OS_IDP_OTP_KEY)
  --os-oauth2-client-secret [3m<auth-oauth2-client-secret>[0m
                        With v3oauth2clientcredential: Client secret for OAuth2.0 (Env: OS_OAUTH2_CLIENT_SECRET)
  --os-device-authorization-endpoint [3m<auth-device-authorization-endpoint>[0m
                        With v3oidcdeviceauthz: OAuth 2.0 Device Authorization Endpoint. Note that if a discovery
                        document is being passed this option will override the endpoint provided by the server in the
                        discovery document. (Env: OS_DEVICE_AUTHORIZATION_ENDPOINT)
  --os-code-challenge-method [3m<auth-code-challenge-method>[0m
                        With v3oidcdeviceauthz: PKCE Challenge Method (RFC 7636) (Env: OS_CODE_CHALLENGE_METHOD)

[4mCommands[0m:
  [36maccess rule delete[39m  Delete access rule(s)
  [36maccess rule list[39m  List access rules
  [36maccess rule show[39m  Display access rule details
  [36maccess token create[39m  Create an access token
  [36maddress group create[39m  Create a new Address Group
  [36maddress group delete[39m  Delete address group(s)
  [36maddress group list[39m  List address groups
  [36maddress group set[39m  Set address group properties
  [36maddress group show[39m  Display address group details
  [36maddress group unset[39m  Unset address group properties
  [36maddress scope create[39m  Create a new Address Scope
  [36maddress scope delete[39m  Delete address scope(s)
  [36maddress scope list[39m  List address scopes
  [36maddress scope set[39m  Set address scope properties
  [36maddress scope show[39m  Display address scope details
  [36maggregate add host[39m  Add host to aggregate
  [36maggregate cache image[39m  Request image caching for aggregate
  [36maggregate create[39m  Create a new aggregate
  [36maggregate delete[39m  Delete existing aggregate(s)
  [36maggregate list[39m  List all aggregates
  [36maggregate remove host[39m  Remove host from aggregate
  [36maggregate set[39m  Set aggregate properties
  [36maggregate show[39m  Display aggregate details
  [36maggregate unset[39m  Unset aggregate properties
  [36mapplication credential create[39m  Create new application credential
  [36mapplication credential delete[39m  Delete application credentials(s)
  [36mapplication credential list[39m  List application credentials
  [36mapplication credential show[39m  Display application credential details
  [36mavailability zone list[39m  List availability zones and their status
  [36mblock storage cleanup[39m  Do block storage cleanup
  [36mblock storage cluster list[39m  List block storage clusters
  [36mblock storage cluster set[39m  Set block storage cluster properties
  [36mblock storage cluster show[39m  Show detailed information for a block storage cluster
  [36mblock storage log level list[39m  List log levels of block storage service
  [36mblock storage log level set[39m  Set log level of block storage service
  [36mblock storage resource filter list[39m  List block storage resource filters
  [36mblock storage resource filter show[39m  Show filters for a block storage resource type
  [36mblock storage snapshot manageable list[39m  List manageable snapshots
  [36mblock storage volume manageable list[39m  List manageable volumes
  [36mcached image clear[39m  Clear all images from cache, queue or both
  [36mcached image delete[39m  Delete image(s) from cache
  [36mcached image list[39m  Get Cache State
  [36mcached image queue[39m  Queue image(s) for caching
  [36mcatalog list[39m  List services in the service catalog
  [36mcatalog show[39m  Display service catalog details
  [36mcommand list[39m  List recognized commands by group
  [36mcomplete[39m  print bash completion command[90m (cliff)[39m
  [36mcompute agent create[39m  Create compute agent
  [36mcompute agent delete[39m  Delete compute agent(s)
  [36mcompute agent list[39m  List compute agents
  [36mcompute agent set[39m  Set compute agent properties
  [36mcompute service delete[39m  Delete compute service(s)
  [36mcompute service list[39m  List compute services
  [36mcompute service set[39m  Set compute service properties
  [36mconfiguration show[39m  Display configuration details
  [36mconsistency group add volume[39m  Add volume(s) to consistency group
  [36mconsistency group create[39m  Create new consistency group
  [36mconsistency group delete[39m  Delete consistency group(s)
  [36mconsistency group list[39m  List consistency groups
  [36mconsistency group remove volume[39m  Remove volume(s) from consistency group
  [36mconsistency group set[39m  Set consistency group properties
  [36mconsistency group show[39m  Display consistency group details
  [36mconsistency group snapshot create[39m  Create new consistency group snapshot
  [36mconsistency group snapshot delete[39m  Delete consistency group snapshot(s)
  [36mconsistency group snapshot list[39m  List consistency group snapshots
  [36mconsistency group snapshot show[39m  Display consistency group snapshot details
  [36mconsole log show[39m  Show server's console output
  [36mconsole url show[39m  Show server's remote console URL
  [36mconsumer create[39m  Create new consumer
  [36mconsumer delete[39m  Delete consumer(s)
  [36mconsumer list[39m  List consumers
  [36mconsumer set[39m  Set consumer properties
  [36mconsumer show[39m  Display consumer details
  [36mcontainer create[39m  Create new container
  [36mcontainer delete[39m  Delete container
  [36mcontainer list[39m  List containers
  [36mcontainer save[39m  Save container contents locally
  [36mcontainer set[39m  Set container properties
  [36mcontainer show[39m  Display container details
  [36mcontainer unset[39m  Unset container properties
  [36mcredential create[39m  Create new credential
  [36mcredential delete[39m  Delete credential(s)
  [36mcredential list[39m  List credentials
  [36mcredential set[39m  Set credential properties
  [36mcredential show[39m  Display credential details
  [36mdefault security group rule create[39m  Add a new security group rule to the default security group template
  [36mdefault security group rule delete[39m  Remove security group rule(s) from the default security group template
  [36mdefault security group rule list[39m  List security group rules used for new default security groups
  [36mdefault security group rule show[39m  Show a security group rule used for new default security groups
  [36mdomain create[39m  Create new domain
  [36mdomain delete[39m  Delete domain(s)
  [36mdomain list[39m  List domains
  [36mdomain set[39m  Set domain properties
  [36mdomain show[39m  Display domain details
  [36mec2 credentials create[39m  Create EC2 credentials
  [36mec2 credentials delete[39m  Delete EC2 credentials
  [36mec2 credentials list[39m  List EC2 credentials
  [36mec2 credentials show[39m  Display EC2 credentials details
  [36mendpoint add project[39m  Associate a project to an endpoint
  [36mendpoint create[39m  Create new endpoint
  [36mendpoint delete[39m  Delete endpoint(s)
  [36mendpoint group add project[39m  Add a project to an endpoint group
  [36mendpoint group create[39m  Create new endpoint group
  [36mendpoint group delete[39m  Delete endpoint group(s)
  [36mendpoint group list[39m  List endpoint groups
  [36mendpoint group remove project[39m  Remove project from endpoint group
  [36mendpoint group set[39m  Set endpoint group properties
  [36mendpoint group show[39m  Display endpoint group details
  [36mendpoint list[39m  List endpoints
  [36mendpoint remove project[39m  Dissociate a project from an endpoint
  [36mendpoint set[39m  Set endpoint properties
  [36mendpoint show[39m  Display endpoint details
  [36mextension list[39m  List API extensions
  [36mextension show[39m  Show API extension
  [36mfederation domain list[39m  List accessible domains
  [36mfederation project list[39m  List accessible projects
  [36mfederation protocol create[39m  Create new federation protocol
  [36mfederation protocol delete[39m  Delete federation protocol(s)
  [36mfederation protocol list[39m  List federation protocols
  [36mfederation protocol set[39m  Set federation protocol properties
  [36mfederation protocol show[39m  Display federation protocol details
  [36mflavor create[39m  Create new flavor
  [36mflavor delete[39m  Delete flavor(s)
  [36mflavor list[39m  List flavors
  [36mflavor set[39m  Set flavor properties
  [36mflavor show[39m  Display flavor details
  [36mflavor unset[39m  Unset flavor properties
  [36mfloating ip create[39m  Create floating IP
  [36mfloating ip delete[39m  Delete floating IP(s)
  [36mfloating ip list[39m  List floating IP(s)
  [36mfloating ip pool list[39m  List pools of floating IP addresses
  [36mfloating ip port forwarding create[39m  Create floating IP port forwarding
  [36mfloating ip port forwarding delete[39m  Delete floating IP port forwarding
  [36mfloating ip port forwarding list[39m  List floating IP port forwarding
  [36mfloating ip port forwarding set[39m  Set floating IP Port Forwarding Properties
  [36mfloating ip port forwarding show[39m  Display floating IP Port Forwarding details
  [36mfloating ip set[39m  Set floating IP Properties
  [36mfloating ip show[39m  Display floating IP details
  [36mfloating ip unset[39m  Unset floating IP Properties
  [36mgroup add user[39m  Add user to group
  [36mgroup contains user[39m  Check user membership in group
  [36mgroup create[39m  Create new group
  [36mgroup delete[39m  Delete group(s)
  [36mgroup list[39m  List groups
  [36mgroup remove user[39m  Remove user from group
  [36mgroup set[39m  Set group properties
  [36mgroup show[39m  Display group details
  [36mhelp[39m  print detailed help for another command[90m (cliff)[39m
  [36mhost list[39m  DEPRECATED: List hosts
  [36mhost set[39m  DEPRECATED: Set host properties
  [36mhost show[39m  DEPRECATED: Display host details
  [36mhypervisor list[39m  List hypervisors
  [36mhypervisor show[39m  Display hypervisor details
  [36mhypervisor stats show[39m  Display hypervisor stats details
  [36midentity provider create[39m  Create new identity provider
  [36midentity provider delete[39m  Delete identity provider(s)
  [36midentity provider list[39m  List identity providers
  [36midentity provider set[39m  Set identity provider properties
  [36midentity provider show[39m  Display identity provider details
  [36mimage add project[39m  Associate project with image
  [36mimage create[39m  Create/upload an image
  [36mimage delete[39m  Delete image(s)
  [36mimage import[39m  Initiate the image import process
  [36mimage import info[39m  Show available import methods
  [36mimage list[39m  List available images
  [36mimage member get[39m  Show a particular project associated with image
  [36mimage member list[39m  List projects associated with image
  [36mimage metadef namespace create[39m  Create a metadef namespace
  [36mimage metadef namespace delete[39m  Delete metadef namespace
  [36mimage metadef namespace list[39m  List metadef namespaces
  [36mimage metadef namespace set[39m  Set metadef namespace properties
  [36mimage metadef namespace show[39m  Show a metadef namespace
  [36mimage metadef object create[39m  Create a metadef object
  [36mimage metadef object delete[39m  Delete metadata definitions object(s)
  [36mimage metadef object list[39m  List metadef objects inside a specific namespace
  [36mimage metadef object property show[39m  Describe a specific metadata definitions property inside an object
  [36mimage metadef object show[39m  Show a particular metadef object
  [36mimage metadef object update[39m  Update a metadef object
  [36mimage metadef property create[39m  Create a metadef property
  [36mimage metadef property delete[39m  Delete metadef propert(ies)
  [36mimage metadef property list[39m  List metadef properties
  [36mimage metadef property set[39m  Update metadef namespace property
  [36mimage metadef property show[39m  Show a particular metadef property
  [36mimage metadef resource type association create[39m  Create metadef resource type association
  [36mimage metadef resource type association delete[39m  Delete metadef resource type association
  [36mimage metadef resource type association list[39m  List metadef resource type associations
  [36mimage metadef resource type list[39m  List metadef resource types
  [36mimage remove project[39m  Disassociate project with image
  [36mimage save[39m  Save an image locally
  [36mimage set[39m  Set image properties
  [36mimage show[39m  Display image details
  [36mimage stage[39m  Upload data for a specific image to staging
  [36mimage stores list[39m  Get available backends (only valid with Multi-Backend support)
  [36mimage task list[39m  List tasks
  [36mimage task show[39m  Display task details
  [36mimage unset[39m  Unset image tags and properties
  [36mimplied role create[39m  Creates an association between prior and implied roles
  [36mimplied role delete[39m  Deletes an association between prior and implied roles
  [36mimplied role list[39m  List implied roles
  [36mip availability list[39m  List IP availability for network
  [36mip availability show[39m  Show network IP availability details
  [36mkeypair create[39m  Create new public or private key for server ssh access
  [36mkeypair delete[39m  Delete public or private key(s)
  [36mkeypair list[39m  List key fingerprints
  [36mkeypair show[39m  Display key details
  [36mlimit create[39m  Create a limit
  [36mlimit delete[39m  Delete a limit
  [36mlimit list[39m  List limits
  [36mlimit set[39m  Update information about a limit
  [36mlimit show[39m  Display limit details
  [36mlimits show[39m  Show compute and block storage limits
  [36mlocal ip association create[39m  Create Local IP Association
  [36mlocal ip association delete[39m  Delete Local IP association(s)
  [36mlocal ip association list[39m  List Local IP Associations
  [36mlocal ip create[39m  Create Local IP
  [36mlocal ip delete[39m  Delete Local IP(s)
  [36mlocal ip list[39m  List Local IPs
  [36mlocal ip set[39m  Set Local IP properties
  [36mlocal ip show[39m  Display Local IP details
  [36mmapping create[39m  Create new mapping
  [36mmapping delete[39m  Delete mapping(s)
  [36mmapping list[39m  List mappings
  [36mmapping set[39m  Set mapping properties
  [36mmapping show[39m  Display mapping details
  [36mmodule list[39m  List module versions
  [36mnetwork agent add network[39m  Add network to an agent
  [36mnetwork agent add router[39m  Add router to an agent
  [36mnetwork agent delete[39m  Delete network agent(s)
  [36mnetwork agent list[39m  List network agents
  [36mnetwork agent remove network[39m  Remove network from an agent
  [36mnetwork agent remove router[39m  Remove router from an agent
  [36mnetwork agent set[39m  Set network agent properties
  [36mnetwork agent show[39m  Display network agent details
  [36mnetwork auto allocated topology create[39m  Create the  auto allocated topology for project
  [36mnetwork auto allocated topology delete[39m  Delete auto allocated topology for project
  [36mnetwork create[39m  Create new network
  [36mnetwork delete[39m  Delete network(s)
  [36mnetwork flavor add profile[39m  Add a service profile to a network flavor
  [36mnetwork flavor create[39m  Create new network flavor
  [36mnetwork flavor delete[39m  Delete network flavors
  [36mnetwork flavor list[39m  List network flavors
  [36mnetwork flavor profile create[39m  Create new network flavor profile
  [36mnetwork flavor profile delete[39m  Delete network flavor profile
  [36mnetwork flavor profile list[39m  List network flavor profile(s)
  [36mnetwork flavor profile set[39m  Set network flavor profile properties
  [36mnetwork flavor profile show[39m  Display network flavor profile details
  [36mnetwork flavor remove profile[39m  Remove service profile from network flavor
  [36mnetwork flavor set[39m  Set network flavor properties
  [36mnetwork flavor show[39m  Display network flavor details
  [36mnetwork l3 conntrack helper create[39m  Create a new L3 conntrack helper
  [36mnetwork l3 conntrack helper delete[39m  Delete L3 conntrack helper
  [36mnetwork l3 conntrack helper list[39m  List L3 conntrack helpers
  [36mnetwork l3 conntrack helper set[39m  Set L3 conntrack helper properties
  [36mnetwork l3 conntrack helper show[39m  Display L3 conntrack helper details
  [36mnetwork list[39m  List networks
  [36mnetwork meter create[39m  Create network meter
  [36mnetwork meter delete[39m  Delete network meter
  [36mnetwork meter list[39m  List network meters
  [36mnetwork meter rule create[39m  Create a new meter rule
  [36mnetwork meter rule delete[39m  Delete meter rule(s)
  [36mnetwork meter rule list[39m  List meter rules
  [36mnetwork meter rule show[39m  Display meter rules details
  [36mnetwork meter show[39m  Show network meter
  [36mnetwork qos policy create[39m  Create a QoS policy
  [36mnetwork qos policy delete[39m  Delete Qos Policy(s)
  [36mnetwork qos policy list[39m  List QoS policies
  [36mnetwork qos policy set[39m  Set QoS policy properties
  [36mnetwork qos policy show[39m  Display QoS policy details
  [36mnetwork qos rule create[39m  Create new Network QoS rule
  [36mnetwork qos rule delete[39m  Delete Network QoS rule
  [36mnetwork qos rule list[39m  List Network QoS rules
  [36mnetwork qos rule set[39m  Set Network QoS rule properties
  [36mnetwork qos rule show[39m  Display Network QoS rule details
  [36mnetwork qos rule type list[39m  List QoS rule types
  [36mnetwork qos rule type show[39m  Show details about supported QoS rule type
  [36mnetwork rbac create[39m  Create network RBAC policy
  [36mnetwork rbac delete[39m  Delete network RBAC policy(s)
  [36mnetwork rbac list[39m  List network RBAC policies
  [36mnetwork rbac set[39m  Set network RBAC policy properties
  [36mnetwork rbac show[39m  Display network RBAC policy details
  [36mnetwork segment create[39m  Create new network segment
  [36mnetwork segment delete[39m  Delete network segment(s)
  [36mnetwork segment list[39m  List network segments
  [36mnetwork segment range create[39m  Create new network segment range
  [36mnetwork segment range delete[39m  Delete network segment range(s)
  [36mnetwork segment range list[39m  List network segment ranges
  [36mnetwork segment range set[39m  Set network segment range properties
  [36mnetwork segment range show[39m  Display network segment range details
  [36mnetwork segment set[39m  Set network segment properties
  [36mnetwork segment show[39m  Display network segment details
  [36mnetwork service provider list[39m  List Service Providers
  [36mnetwork set[39m  Set network properties
  [36mnetwork show[39m  Show network details
  [36mnetwork subport list[39m  List all subports for a given network trunk
  [36mnetwork trunk create[39m  Create a network trunk for a given project
  [36mnetwork trunk delete[39m  Delete a given network trunk
  [36mnetwork trunk list[39m  List all network trunks
  [36mnetwork trunk set[39m  Set network trunk properties
  [36mnetwork trunk show[39m  Show information of a given network trunk
  [36mnetwork trunk unset[39m  Unset subports from a given network trunk
  [36mnetwork unset[39m  Unset network properties
  [36mobject create[39m  Upload object to container
  [36mobject delete[39m  Delete object from container
  [36mobject list[39m  List objects
  [36mobject save[39m  Save object locally
  [36mobject set[39m  Set object properties
  [36mobject show[39m  Display object details
  [36mobject store account set[39m  Set account properties
  [36mobject store account show[39m  Display account details
  [36mobject store account unset[39m  Unset account properties
  [36mobject unset[39m  Unset object properties
  [36mpolicy create[39m  Create new policy
  [36mpolicy delete[39m  Delete policy(s)
  [36mpolicy list[39m  List policies
  [36mpolicy set[39m  Set policy properties
  [36mpolicy show[39m  Display policy details
  [36mport create[39m  Create a new port
  [36mport delete[39m  Delete port(s)
  [36mport list[39m  List ports
  [36mport set[39m  Set port properties
  [36mport show[39m  Display port details
  [36mport unset[39m  Unset port properties
  [36mproject cleanup[39m  Clean resources associated with a project
  [36mproject create[39m  Create new project
  [36mproject delete[39m  Delete project(s)
  [36mproject list[39m  List projects
  [36mproject set[39m  Set project properties
  [36mproject show[39m  Display project details
  [36mquota delete[39m  Delete configured quota for a project and revert to defaults
  [36mquota list[39m  List quotas for all projects with non-default quota values
  [36mquota set[39m  Set quotas for project or class
  [36mquota show[39m  Show quotas for project or class
  [36mregion create[39m  Create new region
  [36mregion delete[39m  Delete region(s)
  [36mregion list[39m  List regions
  [36mregion set[39m  Set region properties
  [36mregion show[39m  Display region details
  [36mregistered limit create[39m  Create a registered limit
  [36mregistered limit delete[39m  Delete a registered limit
  [36mregistered limit list[39m  List registered limits
  [36mregistered limit set[39m  Update information about a registered limit
  [36mregistered limit show[39m  Display registered limit details
  [36mrequest token authorize[39m  Authorize a request token
  [36mrequest token create[39m  Create a request token
  [36mrole add[39m  Adds a role assignment to a user or group on the system, a domain, or a project
  [36mrole assignment list[39m  List role assignments
  [36mrole create[39m  Create new role
  [36mrole delete[39m  Delete role(s)
  [36mrole list[39m  List roles
  [36mrole remove[39m  Removes a role assignment from system/domain/project : user/group
  [36mrole set[39m  Set role properties
  [36mrole show[39m  Display role details
  [36mrouter add gateway[39m  Add router gateway
  [36mrouter add port[39m  Add a port to a router
  [36mrouter add route[39m  Add extra static routes to a router's routing table
  [36mrouter add subnet[39m  Add a subnet to a router
  [36mrouter create[39m  Create a new router
  [36mrouter delete[39m  Delete router(s)
  [36mrouter list[39m  List routers
  [36mrouter ndp proxy create[39m  Create NDP proxy
  [36mrouter ndp proxy delete[39m  Delete NDP proxy
  [36mrouter ndp proxy list[39m  List NDP proxies
  [36mrouter ndp proxy set[39m  Set NDP proxy properties
  [36mrouter ndp proxy show[39m  Display NDP proxy details
  [36mrouter remove gateway[39m  Remove router gateway
  [36mrouter remove port[39m  Remove a port from a router
  [36mrouter remove route[39m  Remove extra static routes from a router's routing table
  [36mrouter remove subnet[39m  Remove a subnet from a router
  [36mrouter set[39m  Set router properties
  [36mrouter show[39m  Display router details
  [36mrouter unset[39m  Unset router properties
  [36msecurity group create[39m  Create a new security group
  [36msecurity group delete[39m  Delete security group(s)
  [36msecurity group list[39m  List security groups
  [36msecurity group rule create[39m  Create a new security group rule
  [36msecurity group rule delete[39m  Delete security group rule(s)
  [36msecurity group rule list[39m  List security group rules
  [36msecurity group rule show[39m  Display security group rule details
  [36msecurity group set[39m  Set security group properties
  [36msecurity group show[39m  Display security group details
  [36msecurity group unset[39m  Unset security group properties
  [36mserver add fixed ip[39m  Add fixed IP address to server
  [36mserver add floating ip[39m  Add floating IP address to server
  [36mserver add network[39m  Add network to server
  [36mserver add port[39m  Add port to server
  [36mserver add security group[39m  Add security group(s) to server
  [36mserver add volume[39m  Add volume to server
  [36mserver backup create[39m  Create a server backup image
  [36mserver create[39m  Create a new server
  [36mserver delete[39m  Delete server(s)
  [36mserver dump create[39m  Create a dump file in server(s)
  [36mserver evacuate[39m  Evacuate a server to a different host
  [36mserver event list[39m  List recent events of a server
  [36mserver event show[39m  Show server event details
  [36mserver group create[39m  Create a new server group
  [36mserver group delete[39m  Delete existing server group(s)
  [36mserver group list[39m  List all server groups
  [36mserver group show[39m  Display server group details
  [36mserver image create[39m  Create a new server disk image from an existing server
  [36mserver list[39m  List servers
  [36mserver lock[39m  Lock server(s)
  [36mserver migrate[39m  Migrate server to different host
  [36mserver migrate confirm[39m  DEPRECATED: Use 'server migration confirm' instead
  [36mserver migrate revert[39m  DEPRECATED: Use 'server migration revert' instead
  [36mserver migration abort[39m  Cancel an ongoing live migration
  [36mserver migration confirm[39m  Confirm server migration
  [36mserver migration force complete[39m  Force an ongoing live migration to complete
  [36mserver migration list[39m  List server migrations
  [36mserver migration revert[39m  Revert server migration
  [36mserver migration show[39m  Show an in-progress live migration for a given server
  [36mserver pause[39m  Pause server(s)
  [36mserver reboot[39m  Perform a hard or soft server reboot
  [36mserver rebuild[39m  Rebuild server
  [36mserver remove fixed ip[39m  Remove fixed IP address from server
  [36mserver remove floating ip[39m  Remove floating IP address from server
  [36mserver remove network[39m  Remove all ports of a network from server
  [36mserver remove port[39m  Remove port from server
  [36mserver remove security group[39m  Remove security group from server
  [36mserver remove volume[39m  Remove volume from server
  [36mserver rescue[39m  Put server in rescue mode
  [36mserver resize[39m  Scale server to a new flavor
  [36mserver resize confirm[39m  Confirm server resize
  [36mserver resize revert[39m  Revert server resize
  [36mserver restore[39m  Restore server(s)
  [36mserver resume[39m  Resume server(s)
  [36mserver set[39m  Set server properties
  [36mserver shelve[39m  Shelve and optionally offload server(s)
  [36mserver show[39m  Show server details
  [36mserver ssh[39m  SSH to server
  [36mserver start[39m  Start server(s)
  [36mserver stop[39m  Stop server(s)
  [36mserver suspend[39m  Suspend server(s)
  [36mserver unlock[39m  Unlock server(s)
  [36mserver unpause[39m  Unpause server(s)
  [36mserver unrescue[39m  Restore server from rescue mode
  [36mserver unset[39m  Unset server properties and tags
  [36mserver unshelve[39m  Unshelve server(s)
  [36mserver volume list[39m  List all the volumes attached to a server
  [36mserver volume set[39m  Update a volume attachment on the server
  [36mserver volume update[39m  DEPRECATED: Use 'server volume set' instead
  [36mservice create[39m  Create new service
  [36mservice delete[39m  Delete service(s)
  [36mservice list[39m  List services
  [36mservice provider create[39m  Create new service provider
  [36mservice provider delete[39m  Delete service provider(s)
  [36mservice provider list[39m  List service providers
  [36mservice provider set[39m  Set service provider properties
  [36mservice provider show[39m  Display service provider details
  [36mservice set[39m  Set service properties
  [36mservice show[39m  Display service details
  [36msubnet create[39m  Create a subnet
  [36msubnet delete[39m  Delete subnet(s)
  [36msubnet list[39m  List subnets
  [36msubnet pool create[39m  Create subnet pool
  [36msubnet pool delete[39m  Delete subnet pool(s)
  [36msubnet pool list[39m  List subnet pools
  [36msubnet pool set[39m  Set subnet pool properties
  [36msubnet pool show[39m  Display subnet pool details
  [36msubnet pool unset[39m  Unset subnet pool properties
  [36msubnet set[39m  Set subnet properties
  [36msubnet show[39m  Display subnet details
  [36msubnet unset[39m  Unset subnet properties
  [36mtoken issue[39m  Issue new token
  [36mtoken revoke[39m  Revoke existing token
  [36mtrust create[39m  Create new trust
  [36mtrust delete[39m  Delete trust(s)
  [36mtrust list[39m  List trusts
  [36mtrust show[39m  Display trust details
  [36musage list[39m  List resource usage per project
  [36musage show[39m  Show resource usage for a single project
  [36muser create[39m  Create new user
  [36muser delete[39m  Delete user(s)
  [36muser list[39m  List users
  [36muser password set[39m  Change current user password
  [36muser set[39m  Set user properties
  [36muser show[39m  Display user details
  [36mversions show[39m  Show available versions of services
  [36mvolume attachment complete[39m  Complete an attachment for a volume
  [36mvolume attachment create[39m  Create an attachment for a volume
  [36mvolume attachment delete[39m  Delete an attachment for a volume
  [36mvolume attachment list[39m  Lists all volume attachments
  [36mvolume attachment set[39m  Update an attachment for a volume
  [36mvolume attachment show[39m  Show detailed information for a volume attachment
  [36mvolume backend capability show[39m  Show capability command
  [36mvolume backend pool list[39m  List pool command
  [36mvolume backup create[39m  Create new volume backup
  [36mvolume backup delete[39m  Delete volume backup(s)
  [36mvolume backup list[39m  List volume backups
  [36mvolume backup record export[39m  Export volume backup details
  [36mvolume backup record import[39m  Import volume backup details
  [36mvolume backup restore[39m  Restore volume backup
  [36mvolume backup set[39m  Set volume backup properties
  [36mvolume backup show[39m  Display volume backup details
  [36mvolume backup unset[39m  Unset volume backup properties
  [36mvolume create[39m  Create new volume
  [36mvolume delete[39m  Delete volume(s)
  [36mvolume group create[39m  Create a volume group
  [36mvolume group delete[39m  Delete a volume group
  [36mvolume group failover[39m  Failover replication for a volume group
  [36mvolume group list[39m  Lists all volume groups
  [36mvolume group set[39m  Update a volume group
  [36mvolume group show[39m  Show detailed information for a volume group
  [36mvolume group snapshot create[39m  Create a volume group snapshot
  [36mvolume group snapshot delete[39m  Delete a volume group snapshot
  [36mvolume group snapshot list[39m  Lists all volume group snapshot
  [36mvolume group snapshot show[39m  Show detailed information for a volume group snapshot
  [36mvolume group type create[39m  Create a volume group type
  [36mvolume group type delete[39m  Delete a volume group type
  [36mvolume group type list[39m  Lists all volume group types
  [36mvolume group type set[39m  Update a volume group type
  [36mvolume group type show[39m  Show detailed information for a volume group type
  [36mvolume host set[39m  Set volume host properties
  [36mvolume list[39m  List volumes
  [36mvolume message delete[39m  Delete a volume failure message
  [36mvolume message list[39m  List volume failure messages
  [36mvolume message show[39m  Show a volume failure message
  [36mvolume migrate[39m  Migrate volume to a new host
  [36mvolume qos associate[39m  Associate a QoS specification to a volume type
  [36mvolume qos create[39m  Create new QoS specification
  [36mvolume qos delete[39m  Delete QoS specification
  [36mvolume qos disassociate[39m  Disassociate a QoS specification from a volume type
  [36mvolume qos list[39m  List QoS specifications
  [36mvolume qos set[39m  Set QoS specification properties
  [36mvolume qos show[39m  Display QoS specification details
  [36mvolume qos unset[39m  Unset QoS specification properties
  [36mvolume revert[39m  Revert a volume to a snapshot
  [36mvolume service list[39m  List service command
  [36mvolume service set[39m  Set volume service properties
  [36mvolume set[39m  Set volume properties
  [36mvolume show[39m  Display volume details
  [36mvolume snapshot create[39m  Create new volume snapshot
  [36mvolume snapshot delete[39m  Delete volume snapshot(s)
  [36mvolume snapshot list[39m  List volume snapshots
  [36mvolume snapshot set[39m  Set volume snapshot properties
  [36mvolume snapshot show[39m  Display volume snapshot details
  [36mvolume snapshot unset[39m  Unset volume snapshot properties
  [36mvolume summary[39m  Show a summary of all volumes in this deployment
  [36mvolume transfer request accept[39m  Accept volume transfer request
  [36mvolume transfer request create[39m  Create volume transfer request
  [36mvolume transfer request delete[39m  Delete volume transfer request(s)
  [36mvolume transfer request list[39m  Lists all volume transfer requests
  [36mvolume transfer request show[39m  Show volume transfer request details
  [36mvolume type create[39m  Create new volume type
  [36mvolume type delete[39m  Delete volume type(s)
  [36mvolume type list[39m  List volume types
  [36mvolume type set[39m  Set volume type properties
  [36mvolume type show[39m  Display volume type details
  [36mvolume type unset[39m  Unset volume type properties
  [36mvolume unset[39m  Unset volume properties
