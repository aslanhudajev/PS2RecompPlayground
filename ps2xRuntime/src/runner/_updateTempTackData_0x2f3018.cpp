#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _updateTempTackData
// Address: 0x2f3018 - 0x2f30f8
void _updateTempTackData_0x2f3018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3018u;

    // 0x2f3018: 0x3c02003a
    ctx->pc = 0x2f3018u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f301c: 0x24040003
    ctx->pc = 0x2f301cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3020: 0x8c4331bc
    ctx->pc = 0x2f3020u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x2f3024: 0x1064001d
    ctx->pc = 0x2F3024u;
    {
        const bool branch_taken_0x2f3024 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x2F3028u;
        SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3024) {
            ctx->pc = 0x2F309Cu;
            goto label_2f309c;
        }
    }
    ctx->pc = 0x2F302Cu;
    // 0x2f302c: 0x3c07003a
    ctx->pc = 0x2f302cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2f3030: 0x8ca431b8
    ctx->pc = 0x2f3030u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12728)));
    // 0x2f3034: 0x8ce339b0
    ctx->pc = 0x2f3034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 14768)));
    // 0x2f3038: 0x10830018
    ctx->pc = 0x2F3038u;
    {
        const bool branch_taken_0x2f3038 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x2F303Cu;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3038) {
            ctx->pc = 0x2F309Cu;
            goto label_2f309c;
        }
    }
    ctx->pc = 0x2F3040u;
    // 0x2f3040: 0x3c08003a
    ctx->pc = 0x2f3040u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f3044: 0x8d0239ac
    ctx->pc = 0x2f3044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 14764)));
    // 0x2f3048: 0x10400007
    ctx->pc = 0x2F3048u;
    {
        const bool branch_taken_0x2f3048 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F304Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f3048) {
            ctx->pc = 0x2F3068u;
            goto label_2f3068;
        }
    }
    ctx->pc = 0x2F3050u;
    // 0x2f3050: 0x3c0a003a
    ctx->pc = 0x2f3050u;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
    // 0x2f3054: 0xad0039ac
    ctx->pc = 0x2f3054u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 14764), GPR_U32(ctx, 0));
    // 0x2f3058: 0x8d423970
    ctx->pc = 0x2f3058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 14704)));
    // 0x2f305c: 0x24420400
    ctx->pc = 0x2f305cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2f3060: 0x10000002
    ctx->pc = 0x2F3060u;
    {
        const bool branch_taken_0x2f3060 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3064u;
        WRITE32(ADD32(GPR_U32(ctx, 10), 14704), GPR_U32(ctx, 2));
        if (branch_taken_0x2f3060) {
            ctx->pc = 0x2F306Cu;
            goto label_2f306c;
        }
    }
    ctx->pc = 0x2F3068u;
label_2f3068:
    // 0x2f3068: 0x3c0a003a
    ctx->pc = 0x2f3068u;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
label_2f306c:
    // 0x2f306c: 0x83102a
    ctx->pc = 0x2f306cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x2f3070: 0x10400006
    ctx->pc = 0x2F3070u;
    {
        const bool branch_taken_0x2f3070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3074u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3070) {
            ctx->pc = 0x2F308Cu;
            goto label_2f308c;
        }
    }
    ctx->pc = 0x2F3078u;
    // 0x2f3078: 0x8c623978
    ctx->pc = 0x2f3078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14712)));
    // 0x2f307c: 0x14400004
    ctx->pc = 0x2F307Cu;
    {
        const bool branch_taken_0x2f307c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3080u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12728)));
        if (branch_taken_0x2f307c) {
            ctx->pc = 0x2F3090u;
            goto label_2f3090;
        }
    }
    ctx->pc = 0x2F3084u;
    // 0x2f3084: 0x24020001
    ctx->pc = 0x2f3084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3088: 0xacc239ac
    ctx->pc = 0x2f3088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14764), GPR_U32(ctx, 2));
label_2f308c:
    // 0x2f308c: 0x8d2231b8
    ctx->pc = 0x2f308cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12728)));
label_2f3090:
    // 0x2f3090: 0xac603978
    ctx->pc = 0x2f3090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14712), GPR_U32(ctx, 0));
    // 0x2f3094: 0x10000003
    ctx->pc = 0x2F3094u;
    {
        const bool branch_taken_0x2f3094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3098u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 14768), GPR_U32(ctx, 2));
        if (branch_taken_0x2f3094) {
            ctx->pc = 0x2F30A4u;
            goto label_2f30a4;
        }
    }
    ctx->pc = 0x2F309Cu;
label_2f309c:
    // 0x2f309c: 0x3c08003a
    ctx->pc = 0x2f309cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f30a0: 0x3c0a003a
    ctx->pc = 0x2f30a0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)58 << 16));
label_2f30a4:
    // 0x2f30a4: 0x8d433970
    ctx->pc = 0x2f30a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 14704)));
    // 0x2f30a8: 0x3c06003a
    ctx->pc = 0x2f30a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f30ac: 0x8ca431b8
    ctx->pc = 0x2f30acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12728)));
    // 0x2f30b0: 0x8d0239ac
    ctx->pc = 0x2f30b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 14764)));
    // 0x2f30b4: 0x642821
    ctx->pc = 0x2f30b4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f30b8: 0x10400008
    ctx->pc = 0x2F30B8u;
    {
        const bool branch_taken_0x2f30b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F30BCu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12920), GPR_U32(ctx, 5));
        if (branch_taken_0x2f30b8) {
            ctx->pc = 0x2F30DCu;
            goto label_2f30dc;
        }
    }
    ctx->pc = 0x2F30C0u;
    // 0x2f30c0: 0x3c03003a
    ctx->pc = 0x2f30c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f30c4: 0x8c6239b0
    ctx->pc = 0x2f30c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14768)));
    // 0x2f30c8: 0x44102a
    ctx->pc = 0x2f30c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2f30cc: 0x54400004
    ctx->pc = 0x2F30CCu;
    {
        const bool branch_taken_0x2f30cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f30cc) {
            ctx->pc = 0x2F30D0u;
            SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
            ctx->pc = 0x2F30E0u;
            goto label_2f30e0;
        }
    }
    ctx->pc = 0x2F30D4u;
    // 0x2f30d4: 0x24a20400
    ctx->pc = 0x2f30d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1024));
    // 0x2f30d8: 0xacc23278
    ctx->pc = 0x2f30d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12920), GPR_U32(ctx, 2));
label_2f30dc:
    // 0x2f30dc: 0x3c05003a
    ctx->pc = 0x2f30dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2f30e0:
    // 0x2f30e0: 0x8cc43278
    ctx->pc = 0x2f30e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 12920)));
    // 0x2f30e4: 0x8ca23974
    ctx->pc = 0x2f30e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 14708)));
    // 0x2f30e8: 0x44182a
    ctx->pc = 0x2f30e8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2f30ec: 0x83100b
    ctx->pc = 0x2f30ecu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2f30f0: 0x3e00008
    ctx->pc = 0x2F30F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F30F4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 14708), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3068u: goto label_2f3068;
            case 0x2F306Cu: goto label_2f306c;
            case 0x2F308Cu: goto label_2f308c;
            case 0x2F3090u: goto label_2f3090;
            case 0x2F309Cu: goto label_2f309c;
            case 0x2F30A4u: goto label_2f30a4;
            case 0x2F30DCu: goto label_2f30dc;
            case 0x2F30E0u: goto label_2f30e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F30F8u;
}
