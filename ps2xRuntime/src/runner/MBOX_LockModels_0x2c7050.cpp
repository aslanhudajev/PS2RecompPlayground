#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_LockModels
// Address: 0x2c7050 - 0x2c70d8
void MBOX_LockModels_0x2c7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7050u;

    // 0x2c7050: 0x27bdffe0
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7054: 0xffbf0010
    ctx->pc = 0x2c7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7058: 0xffb00000
    ctx->pc = 0x2c7058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c705c: 0xc0b4fbe
    ctx->pc = 0x2C705Cu;
    SET_GPR_U32(ctx, 31, 0x2C7064u);
    ctx->pc = 0x2C7060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LockMem_0x2d3ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7064u; }
    }
    if (ctx->pc != 0x2C7064u) { return; }
    ctx->pc = 0x2C7064u;
    // 0x2c7064: 0xc0b11f0
    ctx->pc = 0x2C7064u;
    SET_GPR_U32(ctx, 31, 0x2C706Cu);
    ctx->pc = 0x2C7068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C47C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBLockFonts_0x2c47c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C706Cu; }
    }
    if (ctx->pc != 0x2C706Cu) { return; }
    ctx->pc = 0x2C706Cu;
    // 0x2c706c: 0x3c020038
    ctx->pc = 0x2c706cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7070: 0x2442c970
    ctx->pc = 0x2c7070u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953328));
    // 0x2c7074: 0x101880
    ctx->pc = 0x2c7074u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c7078: 0x621821
    ctx->pc = 0x2c7078u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c707c: 0x3c020038
    ctx->pc = 0x2c707cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c7080: 0x8c42c500
    ctx->pc = 0x2c7080u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c7084: 0xac620000
    ctx->pc = 0x2c7084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c7088: 0x3c020037
    ctx->pc = 0x2c7088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c708c: 0x8c422974
    ctx->pc = 0x2c708cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10612)));
    // 0x2c7090: 0x10400006
    ctx->pc = 0x2C7090u;
    {
        const bool branch_taken_0x2c7090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C7094u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2c7090) {
            ctx->pc = 0x2C70ACu;
            goto label_2c70ac;
        }
    }
    ctx->pc = 0x2C7098u;
    // 0x2c7098: 0x3c030038
    ctx->pc = 0x2c7098u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c709c: 0x8c62c374
    ctx->pc = 0x2c709cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294951796)));
    // 0x2c70a0: 0x4420001
    ctx->pc = 0x2C70A0u;
    {
        const bool branch_taken_0x2c70a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c70a0) {
            ctx->pc = 0x2C70A4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294951796), GPR_U32(ctx, 16));
            ctx->pc = 0x2C70A8u;
            goto label_2c70a8;
        }
    }
    ctx->pc = 0x2C70A8u;
label_2c70a8:
    // 0x2c70a8: 0x3c020037
    ctx->pc = 0x2c70a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2c70ac:
    // 0x2c70ac: 0x8c422960
    ctx->pc = 0x2c70acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10592)));
    // 0x2c70b0: 0x10400006
    ctx->pc = 0x2C70B0u;
    {
        const bool branch_taken_0x2c70b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C70B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2c70b0) {
            ctx->pc = 0x2C70CCu;
            goto label_2c70cc;
        }
    }
    ctx->pc = 0x2C70B8u;
    // 0x2c70b8: 0x3c030038
    ctx->pc = 0x2c70b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c70bc: 0x8c62c370
    ctx->pc = 0x2c70bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294951792)));
    // 0x2c70c0: 0x4420002
    ctx->pc = 0x2C70C0u;
    {
        const bool branch_taken_0x2c70c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2c70c0) {
            ctx->pc = 0x2C70C4u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294951792), GPR_U32(ctx, 16));
            ctx->pc = 0x2C70CCu;
            goto label_2c70cc;
        }
    }
    ctx->pc = 0x2C70C8u;
    // 0x2c70c8: 0xdfbf0010
    ctx->pc = 0x2c70c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c70cc:
    // 0x2c70cc: 0xdfb00000
    ctx->pc = 0x2c70ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c70d0: 0x3e00008
    ctx->pc = 0x2C70D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C70D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C70A8u: goto label_2c70a8;
            case 0x2C70ACu: goto label_2c70ac;
            case 0x2C70CCu: goto label_2c70cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C70D8u;
}
