//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_2_DOT3.png"].CGImage;      
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
        glGenTextures(1, &mountains_Chain_2_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_2_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"mountains_Chain_2.png"].CGImage;           
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
        glGenTextures(1, &mountains_Chain_2_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, mountains_Chain_2_TEXTUREMAP);                              
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
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_2/mountains_Chain_2_DOT3.png",     mountains_Chain_2_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/mountains_Chain_2/mountains_Chain_2.png",          mountains_Chain_2_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_2.cpp"                                                                                         
    glGenBuffers(1,              &mountains_Chain_2_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, mountains_Chain_2_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(mountains_Chain_2), mountains_Chain_2, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "mountains_Chain_2_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &mountains_Chain_2_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, mountains_Chain_2_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(mountains_Chain_2_INDICES), mountains_Chain_2_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    mountains_Chain_2_boundingBox[0] = -16.8433;
    mountains_Chain_2_boundingBox[1] = 54.4235;
    mountains_Chain_2_boundingBox[2] = -1.22778;
    mountains_Chain_2_boundingBox[3] = 19.6397;
    mountains_Chain_2_boundingBox[4] = -11.5172;
    mountains_Chain_2_boundingBox[5] = 56.348;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -16.8433;
    collisionBoxArray[boxCount][1] = 54.4235;
    collisionBoxArray[boxCount][2] = -1.22778;
    collisionBoxArray[boxCount][3] = 19.6397;
    collisionBoxArray[boxCount][4] = -11.5172;
    collisionBoxArray[boxCount][5] = 56.348;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
