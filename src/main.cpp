#include "main.h"

int main() {
    const char* file_path = "/path/to/your/file";

    size_t AvgSize = 4096;

    int chunkCount = 0;
    Chunk* chunks = process_file_chunks(file_path, 0, 0, AvgSize, &chunkCount);

    if (chunks != NULL && chunkCount > 0) {
        // Print the first chunk's information
        printf("First chunk ID: %d, Size: %zu, Offset: %zu\n", chunks[0].id, chunks[0].size, chunks[0].offset);

        // Free the allocated memory for chunks
        for (int i = 0; i < chunkCount; i++) {
            free(chunks[i].data);
        }
        free(chunks);
    }

    return 0;
}