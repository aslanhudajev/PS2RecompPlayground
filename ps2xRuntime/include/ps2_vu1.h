#ifndef PS2_VU1_H
#define PS2_VU1_H

#include <cstdint>

class GS;
class PS2Memory;

struct VU1State
{
    float vf[32][4];       // Vector float registers (VF0 = {0,0,0,1})
    int32_t vi[16];        // Integer registers (VI0 = 0, only low 16 bits significant)
    float acc[4];          // Accumulator
    float q;               // DIV/RSQRT result
    float p;               // EFU result
    float i;               // I register (loaded via LOI)
    uint32_t pc;           // Program counter (byte offset into micro memory)
    uint32_t mac;          // MAC flags
    uint32_t clip;         // Clipping flags
    uint32_t status;       // Status flags
    bool ebit;             // E-bit delay state: stop after one more instruction
    uint32_t itop;         // ITOP value (from VIF1)
    uint32_t xitop;        // XITOP value
};

class VU1Interpreter
{
public:
    VU1Interpreter();

    void reset();

    // Execute VU1 microprogram starting at bytePC until E-bit termination or cycle limit.
    // When memory is non-null, XGKICK submits via memory->processGIFPacket; otherwise via gs.
    void execute(uint8_t *vuCode, uint32_t codeSize,
                 uint8_t *vuData, uint32_t dataSize,
                 GS &gs, PS2Memory *memory = nullptr,
                 uint32_t startPC = 0, uint32_t itop = 0,
                 uint32_t maxCycles = 65536);

    // Resume execution from the current PC (for MSCNT).
    void resume(uint8_t *vuCode, uint32_t codeSize,
                uint8_t *vuData, uint32_t dataSize,
                GS &gs, PS2Memory *memory = nullptr,
                uint32_t itop = 0, uint32_t maxCycles = 65536);

    VU1State &state() { return m_state; }
    const VU1State &state() const { return m_state; }

private:
    VU1State m_state;

    void run(uint8_t *vuCode, uint32_t codeSize,
             uint8_t *vuData, uint32_t dataSize,
             GS &gs, PS2Memory *memory, uint32_t maxCycles);

    void execUpper(uint32_t instr);
    void execLower(uint32_t instr, uint8_t *vuData, uint32_t dataSize, GS &gs, PS2Memory *memory, uint32_t upperInstr);

    // Helpers
    void applyDest(float *dst, const float *result, uint8_t dest);
    void applyDestAcc(const float *result, uint8_t dest);
    float broadcast(const float *vf, uint8_t bc);
};

#endif // PS2_VU1_H
