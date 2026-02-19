#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterUpdateChild
// Address: 0x298cd8 - 0x298d88
void CritterUpdateChild_0x298cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x298cd8u;

    // 0x298cd8: 0x27bdffd0
    ctx->pc = 0x298cd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298cdc: 0xffbf0020
    ctx->pc = 0x298cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298ce0: 0xffb10010
    ctx->pc = 0x298ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298ce4: 0xffb00000
    ctx->pc = 0x298ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298ce8: 0x80882d
    ctx->pc = 0x298ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cec: 0xa0802d
    ctx->pc = 0x298cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298cf0: 0x26240010
    ctx->pc = 0x298cf0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x298cf4: 0xc0b5494
    ctx->pc = 0x298CF4u;
    SET_GPR_U32(ctx, 31, 0x298CFCu);
    ctx->pc = 0x298CF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298CFCu; }
    }
    if (ctx->pc != 0x298CFCu) { return; }
    ctx->pc = 0x298CFCu;
    // 0x298cfc: 0xc6200050
    ctx->pc = 0x298cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d00: 0xe6000050
    ctx->pc = 0x298d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x298d04: 0xc6200054
    ctx->pc = 0x298d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d08: 0xe6000054
    ctx->pc = 0x298d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x298d0c: 0xc6200058
    ctx->pc = 0x298d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d10: 0xe6000058
    ctx->pc = 0x298d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x298d14: 0xc6200060
    ctx->pc = 0x298d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d18: 0xe6000060
    ctx->pc = 0x298d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x298d1c: 0xc6200064
    ctx->pc = 0x298d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d20: 0xe6000064
    ctx->pc = 0x298d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x298d24: 0xc6200068
    ctx->pc = 0x298d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d28: 0xe6000068
    ctx->pc = 0x298d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x298d2c: 0x8e0400dc
    ctx->pc = 0x298d2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x298d30: 0x1080000a
    ctx->pc = 0x298D30u;
    {
        const bool branch_taken_0x298d30 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x298D34u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 992));
        if (branch_taken_0x298d30) {
            ctx->pc = 0x298D5Cu;
            goto label_298d5c;
        }
    }
    ctx->pc = 0x298D38u;
    // 0x298d38: 0xc0b4302
    ctx->pc = 0x298D38u;
    SET_GPR_U32(ctx, 31, 0x298D40u);
    ctx->pc = 0x298D3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0C08u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldMat_0x2d0c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298D40u; }
    }
    if (ctx->pc != 0x298D40u) { return; }
    ctx->pc = 0x298D40u;
    // 0x298d40: 0xc6000410
    ctx->pc = 0x298d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d44: 0xe6000040
    ctx->pc = 0x298d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x298d48: 0xc6000414
    ctx->pc = 0x298d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d4c: 0xe6000044
    ctx->pc = 0x298d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x298d50: 0xc6000418
    ctx->pc = 0x298d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298d54: 0x10000007
    ctx->pc = 0x298D54u;
    {
        const bool branch_taken_0x298d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x298D58u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        if (branch_taken_0x298d54) {
            ctx->pc = 0x298D74u;
            goto label_298d74;
        }
    }
    ctx->pc = 0x298D5Cu;
label_298d5c:
    // 0x298d5c: 0x26240010
    ctx->pc = 0x298d5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 16));
    // 0x298d60: 0xdfbf0020
    ctx->pc = 0x298d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298d64: 0xdfb10010
    ctx->pc = 0x298d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d68: 0xdfb00000
    ctx->pc = 0x298d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298d6c: 0x80b5494
    ctx->pc = 0x298D6Cu;
    ctx->pc = 0x298D70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D5250u;
    CopyMat4_0x2d5250(rdram, ctx, runtime); return;
    ctx->pc = 0x298D74u;
label_298d74:
    // 0x298d74: 0xdfbf0020
    ctx->pc = 0x298d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298d78: 0xdfb10010
    ctx->pc = 0x298d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298d7c: 0xdfb00000
    ctx->pc = 0x298d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298d80: 0x3e00008
    ctx->pc = 0x298D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298D84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298D5Cu: goto label_298d5c;
            case 0x298D74u: goto label_298d74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x298D88u;
}
