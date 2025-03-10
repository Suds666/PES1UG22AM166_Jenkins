pipeline {
    agent any
    
    environment {
        // Define environment variables
        CPP_FILE = 'main/lab8.cpp'
        EXECUTABLE = 'PES1UG22AM166-1'
    }
    
    stages {
        stage('Build') {
            steps {
                echo "Starting Build Stage"
                sh '''
                    echo "Compiling ${CPP_FILE}..."
                    g++ -o ${EXECUTABLE} ${CPP_FILE}
                    echo "Compilation completed successfully!"
                '''
            }
        }
        
        stage('Test') {
            steps {
                echo "Starting Test Stage"
                sh '''
                    echo "Running tests on ${EXECUTABLE}..."
                    echo "Test Output:"
                    ./${EXECUTABLE}
                    echo "Tests completed successfully!"
                '''
            }
        }
        
        stage('Deploy') {
            steps {
                echo "Starting Deploy Stage"
                sh '''
                    echo "Deploying application..."
                    # Create a deployment directory if it doesn't exist
                    mkdir -p ./deploy
                    
                    # Copy the executable to deployment directory
                    cp ${EXECUTABLE} ./deploy/
                    
                    echo "Application deployed successfully!"
                '''
            }
        }
    }
    
    post {
        success {
            echo "Pipeline completed successfully!"
        }
        failure {
            echo "Pipeline failed!"
        }
        always {
            echo "Pipeline execution completed."
        }
    }
}
