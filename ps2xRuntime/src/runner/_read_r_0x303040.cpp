#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _read_r
// Address: 0x303040 - 0x3030a0
void _read_r_0x303040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303040u;

    // 0x303040: 0x27bdffd0
    ctx->pc = 0x303040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303044: 0xffb00000
    ctx->pc = 0x303044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303048: 0x80802d
    ctx->pc = 0x303048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30304c: 0xffb10010
    ctx->pc = 0x30304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x303050: 0xa0202d
    ctx->pc = 0x303050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303054: 0x3c11003c
    ctx->pc = 0x303054u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x303058: 0xc0282d
    ctx->pc = 0x303058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30305c: 0xffbf0020
    ctx->pc = 0x30305cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x303060: 0xae20b198
    ctx->pc = 0x303060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294947224), GPR_U32(ctx, 0));
    // 0x303064: 0xc0c0edc
    ctx->pc = 0x303064u;
    SET_GPR_U32(ctx, 31, 0x30306Cu);
    ctx->pc = 0x303068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_0x303b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30306Cu; }
    }
    if (ctx->pc != 0x30306Cu) { return; }
    ctx->pc = 0x30306Cu;
    // 0x30306c: 0x40182d
    ctx->pc = 0x30306cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303070: 0x2402ffff
    ctx->pc = 0x303070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x303074: 0x14620005
    ctx->pc = 0x303074u;
    {
        const bool branch_taken_0x303074 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x303078u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x303074) {
            ctx->pc = 0x30308Cu;
            goto label_30308c;
        }
    }
    ctx->pc = 0x30307Cu;
    // 0x30307c: 0x8e22b198
    ctx->pc = 0x30307cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294947224)));
    // 0x303080: 0x54400002
    ctx->pc = 0x303080u;
    {
        const bool branch_taken_0x303080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x303080) {
            ctx->pc = 0x303084u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x30308Cu;
            goto label_30308c;
        }
    }
    ctx->pc = 0x303088u;
    // 0x303088: 0xdfbf0020
    ctx->pc = 0x303088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30308c:
    // 0x30308c: 0x60102d
    ctx->pc = 0x30308cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303090: 0xdfb10010
    ctx->pc = 0x303090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303094: 0xdfb00000
    ctx->pc = 0x303094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303098: 0x3e00008
    ctx->pc = 0x303098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30309Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30308Cu: goto label_30308c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3030A0u;
}
