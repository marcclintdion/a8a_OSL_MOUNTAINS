//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_3_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &mountains_Chain_3_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_3_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_3.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &mountains_Chain_3_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_3_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_3/mountains_Chain_3_DOT3.png",     mountains_Chain_3_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_3/mountains_Chain_3.png",          mountains_Chain_3_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_3.cpp"                                                                                         
    glGenBuffers(1,              &mountains_Chain_3_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, mountains_Chain_3_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(mountains_Chain_3), mountains_Chain_3, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_3_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &mountains_Chain_3_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mountains_Chain_3_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(mountains_Chain_3_INDICES), mountains_Chain_3_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    mountains_Chain_3_boundingBox[0] = -50.3031;
    mountains_Chain_3_boundingBox[1] = -11.2959;
    mountains_Chain_3_boundingBox[2] = -1.18379;
    mountains_Chain_3_boundingBox[3] = 19.6584;
    mountains_Chain_3_boundingBox[4] = -14.1797;
    mountains_Chain_3_boundingBox[5] = 58.3878;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -50.3031;
    collisionBoxArray[boxCount][1] = -11.2959;
    collisionBoxArray[boxCount][2] = -1.18379;
    collisionBoxArray[boxCount][3] = 19.6584;
    collisionBoxArray[boxCount][4] = -14.1797;
    collisionBoxArray[boxCount][5] = 58.3878;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
