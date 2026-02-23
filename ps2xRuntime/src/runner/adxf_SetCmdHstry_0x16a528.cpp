#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_SetCmdHstry
// Address: 0x16a528 - 0x16a5c4
void adxf_SetCmdHstry_0x16a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_SetCmdHstry");


    ctx->pc = 0x16a528u;

    // 0x16a528: 0x3c0c0023
    ctx->pc = 0x16a528u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x16a52c: 0x2409ffff
    ctx->pc = 0x16a52cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a530: 0x8d83dd40
    ctx->pc = 0x16a530u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4294958400)));
    // 0x16a534: 0x3c0a0023
    ctx->pc = 0x16a534u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x16a538: 0x254acd20
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294954272));
    // 0x16a53c: 0x80582d
    ctx->pc = 0x16a53cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a540: 0x123482a
    ctx->pc = 0x16a540u;
    SET_GPR_U32(ctx, 9, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 3)));
    // 0x16a544: 0x246200ff
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 255));
    // 0x16a548: 0x69100b
    ctx->pc = 0x16a548u;
    if (GPR_U32(ctx, 9) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x16a54c: 0x21203
    ctx->pc = 0x16a54cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x16a550: 0x21200
    ctx->pc = 0x16a550u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x16a554: 0x621823
    ctx->pc = 0x16a554u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a558: 0x31100
    ctx->pc = 0x16a558u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x16a55c: 0xad83dd40
    ctx->pc = 0x16a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294958400), GPR_U32(ctx, 3));
    // 0x16a560: 0x14a00009
    ctx->pc = 0x16A560u;
    {
        const bool branch_taken_0x16a560 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A564u;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
        if (branch_taken_0x16a560) {
            ctx->pc = 0x16A588u;
            goto label_16a588;
        }
    }
    ctx->pc = 0x16A568u;
    // 0x16a568: 0x3c0a0023
    ctx->pc = 0x16a568u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x16a56c: 0xb2040
    ctx->pc = 0x16a56cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 1));
    // 0x16a570: 0x2543dd20
    ctx->pc = 0x16a570u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 10), 4294958368));
    // 0x16a574: 0x831821
    ctx->pc = 0x16a574u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a578: 0x94620000
    ctx->pc = 0x16a578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a57c: 0x24420001
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a580: 0x10000003
    ctx->pc = 0x16A580u;
    {
        const bool branch_taken_0x16a580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A584u;
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x16a580) {
            ctx->pc = 0x16A590u;
            goto label_16a590;
        }
    }
    ctx->pc = 0x16A588u;
label_16a588:
    // 0x16a588: 0x3c0a0023
    ctx->pc = 0x16a588u;
    SET_GPR_U32(ctx, 10, ((uint32_t)35 << 16));
    // 0x16a58c: 0xb2040
    ctx->pc = 0x16a58cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 11), 1));
label_16a590:
    // 0x16a590: 0x8d83dd40
    ctx->pc = 0x16a590u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4294958400)));
    // 0x16a594: 0x2542dd20
    ctx->pc = 0x16a594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 4294958368));
    // 0x16a598: 0x821021
    ctx->pc = 0x16a598u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a59c: 0xad28000c
    ctx->pc = 0x16a59cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 8));
    // 0x16a5a0: 0x94440000
    ctx->pc = 0x16a5a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a5a4: 0x24630001
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a5a8: 0xad83dd40
    ctx->pc = 0x16a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294958400), GPR_U32(ctx, 3));
    // 0x16a5ac: 0xa12b0000
    ctx->pc = 0x16a5acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x16a5b0: 0xa1250001
    ctx->pc = 0x16a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x16a5b4: 0xa5240002
    ctx->pc = 0x16a5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a5b8: 0xad260004
    ctx->pc = 0x16a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x16a5bc: 0x3e00008
    ctx->pc = 0x16A5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A5C0u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A588u: goto label_16a588;
            case 0x16A590u: goto label_16a590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A5C4u;
}
