#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sequenceDisplayExtension
// Address: 0x2ef258 - 0x2ef2f8
void _sequenceDisplayExtension_0x2ef258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ef258u;

    // 0x2ef258: 0x27bdffd0
    ctx->pc = 0x2ef258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef25c: 0x24040003
    ctx->pc = 0x2ef25cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef260: 0xffb10010
    ctx->pc = 0x2ef260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ef264: 0xffb00000
    ctx->pc = 0x2ef264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef268: 0x3c11003a
    ctx->pc = 0x2ef268u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2ef26c: 0xffbf0020
    ctx->pc = 0x2ef26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ef270: 0xc0bca32
    ctx->pc = 0x2EF270u;
    SET_GPR_U32(ctx, 31, 0x2EF278u);
    ctx->pc = 0x2EF274u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF278u; }
    }
    if (ctx->pc != 0x2EF278u) { return; }
    ctx->pc = 0x2EF278u;
    // 0x2ef278: 0xae02319c
    ctx->pc = 0x2ef278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12700), GPR_U32(ctx, 2));
    // 0x2ef27c: 0xc0bca32
    ctx->pc = 0x2EF27Cu;
    SET_GPR_U32(ctx, 31, 0x2EF284u);
    ctx->pc = 0x2EF280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF284u; }
    }
    if (ctx->pc != 0x2EF284u) { return; }
    ctx->pc = 0x2EF284u;
    // 0x2ef284: 0x1040000d
    ctx->pc = 0x2EF284u;
    {
        const bool branch_taken_0x2ef284 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EF288u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 12704), GPR_U32(ctx, 2));
        if (branch_taken_0x2ef284) {
            ctx->pc = 0x2EF2BCu;
            goto label_2ef2bc;
        }
    }
    ctx->pc = 0x2EF28Cu;
    // 0x2ef28c: 0x24040008
    ctx->pc = 0x2ef28cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ef290: 0xc0bca32
    ctx->pc = 0x2EF290u;
    SET_GPR_U32(ctx, 31, 0x2EF298u);
    ctx->pc = 0x2EF294u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF298u; }
    }
    if (ctx->pc != 0x2EF298u) { return; }
    ctx->pc = 0x2EF298u;
    // 0x2ef298: 0x3c11003a
    ctx->pc = 0x2ef298u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2ef29c: 0xae0231a4
    ctx->pc = 0x2ef29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12708), GPR_U32(ctx, 2));
    // 0x2ef2a0: 0xc0bca32
    ctx->pc = 0x2EF2A0u;
    SET_GPR_U32(ctx, 31, 0x2EF2A8u);
    ctx->pc = 0x2EF2A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF2A8u; }
    }
    if (ctx->pc != 0x2EF2A8u) { return; }
    ctx->pc = 0x2EF2A8u;
    // 0x2ef2a8: 0x3c10003a
    ctx->pc = 0x2ef2a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2ef2ac: 0xae2231a8
    ctx->pc = 0x2ef2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12712), GPR_U32(ctx, 2));
    // 0x2ef2b0: 0xc0bca32
    ctx->pc = 0x2EF2B0u;
    SET_GPR_U32(ctx, 31, 0x2EF2B8u);
    ctx->pc = 0x2EF2B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF2B8u; }
    }
    if (ctx->pc != 0x2EF2B8u) { return; }
    ctx->pc = 0x2EF2B8u;
    // 0x2ef2b8: 0xae0231ac
    ctx->pc = 0x2ef2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12716), GPR_U32(ctx, 2));
label_2ef2bc:
    // 0x2ef2bc: 0x2404000e
    ctx->pc = 0x2ef2bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ef2c0: 0xc0bca32
    ctx->pc = 0x2EF2C0u;
    SET_GPR_U32(ctx, 31, 0x2EF2C8u);
    ctx->pc = 0x2EF2C4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF2C8u; }
    }
    if (ctx->pc != 0x2EF2C8u) { return; }
    ctx->pc = 0x2EF2C8u;
    // 0x2ef2c8: 0x3c11003a
    ctx->pc = 0x2ef2c8u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2ef2cc: 0xae0231b0
    ctx->pc = 0x2ef2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12720), GPR_U32(ctx, 2));
    // 0x2ef2d0: 0xc0bca32
    ctx->pc = 0x2EF2D0u;
    SET_GPR_U32(ctx, 31, 0x2EF2D8u);
    ctx->pc = 0x2EF2D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF2D8u; }
    }
    if (ctx->pc != 0x2EF2D8u) { return; }
    ctx->pc = 0x2EF2D8u;
    // 0x2ef2d8: 0xc0bca32
    ctx->pc = 0x2EF2D8u;
    SET_GPR_U32(ctx, 31, 0x2EF2E0u);
    ctx->pc = 0x2EF2DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EF2E0u; }
    }
    if (ctx->pc != 0x2EF2E0u) { return; }
    ctx->pc = 0x2EF2E0u;
    // 0x2ef2e0: 0xae2231b4
    ctx->pc = 0x2ef2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12724), GPR_U32(ctx, 2));
    // 0x2ef2e4: 0xdfbf0020
    ctx->pc = 0x2ef2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef2e8: 0xdfb10010
    ctx->pc = 0x2ef2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef2ec: 0xdfb00000
    ctx->pc = 0x2ef2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef2f0: 0x3e00008
    ctx->pc = 0x2EF2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF2F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EF2BCu: goto label_2ef2bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EF2F8u;
}
