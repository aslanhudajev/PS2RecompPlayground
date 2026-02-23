#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlMatrixMode
// Address: 0x1a4ce0 - 0x1a4d9c
void nlMatrixMode_0x1a4ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlMatrixMode");


    ctx->pc = 0x1a4ce0u;

    // 0x1a4ce0: 0x27bdffe0
    ctx->pc = 0x1a4ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4ce4: 0x7fbf0010
    ctx->pc = 0x1a4ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4ce8: 0x7fb00000
    ctx->pc = 0x1a4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4cec: 0x70808628
    ctx->pc = 0x1a4cecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4cf0: 0xc06bf55
    ctx->pc = 0x1A4CF0u;
    SET_GPR_U32(ctx, 31, 0x1A4CF8u);
    ctx->pc = 0x1A4CF4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CF8u; }
        else if (ctx->pc != 0x1A4CF8u) { ctx->pc = 0x1A4CF8u; }
    }
    if (ctx->pc != 0x1A4CF8u) { return; }
    ctx->pc = 0x1A4CF8u;
    // 0x1a4cf8: 0x3c020030
    ctx->pc = 0x1a4cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4cfc: 0x24432160
    ctx->pc = 0x1a4cfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1a4d00: 0x838489ac
    ctx->pc = 0x1a4d00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x1a4d04: 0x3c020030
    ctx->pc = 0x1a4d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4d08: 0x24422160
    ctx->pc = 0x1a4d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1a4d0c: 0xc4430000
    ctx->pc = 0x1a4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4d10: 0xc4420004
    ctx->pc = 0x1a4d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4d14: 0xc4410008
    ctx->pc = 0x1a4d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d18: 0xc440000c
    ctx->pc = 0x1a4d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d1c: 0x42100
    ctx->pc = 0x1a4d1cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a4d20: 0x642021
    ctx->pc = 0x1a4d20u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4d24: 0x3c010030
    ctx->pc = 0x1a4d24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4d28: 0xe4830000
    ctx->pc = 0x1a4d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1a4d2c: 0xe4820004
    ctx->pc = 0x1a4d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1a4d30: 0xe4810008
    ctx->pc = 0x1a4d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1a4d34: 0xe480000c
    ctx->pc = 0x1a4d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1a4d38: 0xa39089ac
    ctx->pc = 0x1a4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937004), (uint8_t)GPR_U32(ctx, 16));
    // 0x1a4d3c: 0x838489ac
    ctx->pc = 0x1a4d3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x1a4d40: 0x3c020030
    ctx->pc = 0x1a4d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4d44: 0x24432160
    ctx->pc = 0x1a4d44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1a4d48: 0x3c020030
    ctx->pc = 0x1a4d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a4d4c: 0x24422160
    ctx->pc = 0x1a4d4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8544));
    // 0x1a4d50: 0x42100
    ctx->pc = 0x1a4d50u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1a4d54: 0x641821
    ctx->pc = 0x1a4d54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4d58: 0xc4630000
    ctx->pc = 0x1a4d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4d5c: 0xc4620004
    ctx->pc = 0x1a4d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4d60: 0xc4610008
    ctx->pc = 0x1a4d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d64: 0xc460000c
    ctx->pc = 0x1a4d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d68: 0xe4430000
    ctx->pc = 0x1a4d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a4d6c: 0xe4420004
    ctx->pc = 0x1a4d6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a4d70: 0xe4410008
    ctx->pc = 0x1a4d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a4d74: 0xe440000c
    ctx->pc = 0x1a4d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1a4d78: 0xc06c038
    ctx->pc = 0x1A4D78u;
    SET_GPR_U32(ctx, 31, 0x1A4D80u);
    ctx->pc = 0x1A4D7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D80u; }
        else if (ctx->pc != 0x1A4D80u) { ctx->pc = 0x1A4D80u; }
    }
    if (ctx->pc != 0x1A4D80u) { return; }
    ctx->pc = 0x1A4D80u;
    // 0x1a4d80: 0x3c010030
    ctx->pc = 0x1a4d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4d84: 0xc06c229
    ctx->pc = 0x1A4D84u;
    SET_GPR_U32(ctx, 31, 0x1A4D8Cu);
    ctx->pc = 0x1A4D88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8558)));
    ctx->pc = 0x1B08A4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08A4_0x1b08a4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D8Cu; }
        else if (ctx->pc != 0x1A4D8Cu) { ctx->pc = 0x1A4D8Cu; }
    }
    if (ctx->pc != 0x1A4D8Cu) { return; }
    ctx->pc = 0x1A4D8Cu;
    // 0x1a4d8c: 0x7bbf0010
    ctx->pc = 0x1a4d8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4d90: 0x7bb00000
    ctx->pc = 0x1a4d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4d94: 0x3e00008
    ctx->pc = 0x1A4D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4D9Cu;
}
