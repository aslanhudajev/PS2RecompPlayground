#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitMemHandler
// Address: 0x2d4000 - 0x2d410c
void InitMemHandler_0x2d4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4000u;

    // 0x2d4000: 0x27bdffc0
    ctx->pc = 0x2d4000u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4004: 0xffbf0030
    ctx->pc = 0x2d4004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d4008: 0xffb20020
    ctx->pc = 0x2d4008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d400c: 0xffb10010
    ctx->pc = 0x2d400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d4010: 0xc0b5382
    ctx->pc = 0x2D4010u;
    SET_GPR_U32(ctx, 31, 0x2D4018u);
    ctx->pc = 0x2D4014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2D4E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitWad_0x2d4e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4018u; }
    }
    if (ctx->pc != 0x2D4018u) { return; }
    ctx->pc = 0x2D4018u;
    // 0x2d4018: 0x3c03003a
    ctx->pc = 0x2d4018u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d401c: 0x3c0201c8
    ctx->pc = 0x2d401cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)456 << 16));
    // 0x2d4020: 0x34428000
    ctx->pc = 0x2d4020u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2d4024: 0xac622310
    ctx->pc = 0x2d4024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8976), GPR_U32(ctx, 2));
    // 0x2d4028: 0x3c020031
    ctx->pc = 0x2d4028u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2d402c: 0x8c42f184
    ctx->pc = 0x2d402cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2d4030: 0x10400003
    ctx->pc = 0x2D4030u;
    {
        const bool branch_taken_0x2d4030 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D4034u;
        SET_GPR_U32(ctx, 2, ((uint32_t)440 << 16));
        if (branch_taken_0x2d4030) {
            ctx->pc = 0x2D4040u;
            goto label_2d4040;
        }
    }
    ctx->pc = 0x2D4038u;
    // 0x2d4038: 0x34428000
    ctx->pc = 0x2d4038u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 32768));
    // 0x2d403c: 0xac622310
    ctx->pc = 0x2d403cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8976), GPR_U32(ctx, 2));
label_2d4040:
    // 0x2d4040: 0x3c10003a
    ctx->pc = 0x2d4040u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2d4044: 0x3c11003a
    ctx->pc = 0x2d4044u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d4048: 0xc0be97a
    ctx->pc = 0x2D4048u;
    SET_GPR_U32(ctx, 31, 0x2D4050u);
    ctx->pc = 0x2D404Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8976)));
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4050u; }
    }
    if (ctx->pc != 0x2D4050u) { return; }
    ctx->pc = 0x2D4050u;
    // 0x2d4050: 0x14400011
    ctx->pc = 0x2D4050u;
    {
        const bool branch_taken_0x2d4050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D4054u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 9044), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4050) {
            ctx->pc = 0x2D4098u;
            goto label_2d4098;
        }
    }
    ctx->pc = 0x2D4058u;
    // 0x2d4058: 0x8e322310
    ctx->pc = 0x2d4058u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 8976)));
    // 0x2d405c: 0x220802d
    ctx->pc = 0x2d405cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4060: 0x3c11003a
    ctx->pc = 0x2d4060u;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2d4064: 0x0
    ctx->pc = 0x2d4064u;
    // NOP
label_2d4068:
    // 0x2d4068: 0x8e042310
    ctx->pc = 0x2d4068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8976)));
    // 0x2d406c: 0x2484c000
    ctx->pc = 0x2d406cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x2d4070: 0xc0be97a
    ctx->pc = 0x2D4070u;
    SET_GPR_U32(ctx, 31, 0x2D4078u);
    ctx->pc = 0x2D4074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8976), GPR_U32(ctx, 4));
    ctx->pc = 0x2FA5E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x2fa5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4078u; }
    }
    if (ctx->pc != 0x2D4078u) { return; }
    ctx->pc = 0x2D4078u;
    // 0x2d4078: 0x1040fffb
    ctx->pc = 0x2D4078u;
    {
        const bool branch_taken_0x2d4078 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D407Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 9044), GPR_U32(ctx, 2));
        if (branch_taken_0x2d4078) {
            ctx->pc = 0x2D4068u;
            goto label_2d4068;
        }
    }
    ctx->pc = 0x2D4080u;
    // 0x2d4080: 0x3c02003a
    ctx->pc = 0x2d4080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4084: 0x3c04003b
    ctx->pc = 0x2d4084u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d4088: 0x24847b18
    ctx->pc = 0x2d4088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31512));
    // 0x2d408c: 0x240282d
    ctx->pc = 0x2d408cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4090: 0xc0b4976
    ctx->pc = 0x2D4090u;
    SET_GPR_U32(ctx, 31, 0x2D4098u);
    ctx->pc = 0x2D4094u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8976)));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D4098u; }
    }
    if (ctx->pc != 0x2D4098u) { return; }
    ctx->pc = 0x2D4098u;
label_2d4098:
    // 0x2d4098: 0x3c03003a
    ctx->pc = 0x2d4098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d409c: 0x8c622354
    ctx->pc = 0x2d409cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 9044)));
    // 0x2d40a0: 0x24420040
    ctx->pc = 0x2d40a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x2d40a4: 0x3c04ffff
    ctx->pc = 0x2d40a4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x2d40a8: 0x3484fff0
    ctx->pc = 0x2d40a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65520));
    // 0x2d40ac: 0x441024
    ctx->pc = 0x2d40acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d40b0: 0xac622354
    ctx->pc = 0x2d40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9044), GPR_U32(ctx, 2));
    // 0x2d40b4: 0x3c03003a
    ctx->pc = 0x2d40b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d40b8: 0x8c622310
    ctx->pc = 0x2d40b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8976)));
    // 0x2d40bc: 0x441024
    ctx->pc = 0x2d40bcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d40c0: 0xac622310
    ctx->pc = 0x2d40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8976), GPR_U32(ctx, 2));
    // 0x2d40c4: 0x3c02003a
    ctx->pc = 0x2d40c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d40c8: 0xac40230c
    ctx->pc = 0x2d40c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8972), GPR_U32(ctx, 0));
    // 0x2d40cc: 0x182d
    ctx->pc = 0x2d40ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d40d0: 0x3c02003a
    ctx->pc = 0x2d40d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d40d4: 0x24442360
    ctx->pc = 0x2d40d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9056));
label_2d40d8:
    // 0x2d40d8: 0x31080
    ctx->pc = 0x2d40d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d40dc: 0x441021
    ctx->pc = 0x2d40dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d40e0: 0xac400000
    ctx->pc = 0x2d40e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d40e4: 0x24630001
    ctx->pc = 0x2d40e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d40e8: 0x28620008
    ctx->pc = 0x2d40e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x2d40ec: 0x1440fffa
    ctx->pc = 0x2D40ECu;
    {
        const bool branch_taken_0x2d40ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d40ec) {
            ctx->pc = 0x2D40D8u;
            goto label_2d40d8;
        }
    }
    ctx->pc = 0x2D40F4u;
    // 0x2d40f4: 0xdfbf0030
    ctx->pc = 0x2d40f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d40f8: 0xdfb20020
    ctx->pc = 0x2d40f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d40fc: 0xdfb10010
    ctx->pc = 0x2d40fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4100: 0xdfb00000
    ctx->pc = 0x2d4100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4104: 0x80b4fe0
    ctx->pc = 0x2D4104u;
    ctx->pc = 0x2D4108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D3F80u;
    InitFileSystem_0x2d3f80(rdram, ctx, runtime); return;
    ctx->pc = 0x2D410Cu;
}
