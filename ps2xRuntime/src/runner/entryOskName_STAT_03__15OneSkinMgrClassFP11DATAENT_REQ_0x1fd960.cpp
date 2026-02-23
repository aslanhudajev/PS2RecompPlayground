#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryOskName_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ
// Address: 0x1fd960 - 0x1fda7c
void entryOskName_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ_0x1fd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryOskName_STAT_03__15OneSkinMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1fd960u;

    // 0x1fd960: 0x27bdffe0
    ctx->pc = 0x1fd960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd964: 0x7fbf0010
    ctx->pc = 0x1fd964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1fd968: 0x7fb00000
    ctx->pc = 0x1fd968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fd96c: 0x3c010046
    ctx->pc = 0x1fd96cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)70 << 16));
    // 0x1fd970: 0x84227cf0
    ctx->pc = 0x1fd970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 31984)));
    // 0x1fd974: 0x1040000c
    ctx->pc = 0x1FD974u;
    {
        const bool branch_taken_0x1fd974 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD978u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fd974) {
            ctx->pc = 0x1FD9A8u;
            goto label_1fd9a8;
        }
    }
    ctx->pc = 0x1FD97Cu;
    // 0x1fd97c: 0x70008628
    ctx->pc = 0x1fd97cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fd980:
    // 0x1fd980: 0xc079580
    ctx->pc = 0x1FD980u;
    SET_GPR_U32(ctx, 31, 0x1FD988u);
    ctx->pc = 0x1E5600u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5600_0x1e5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD988u; }
        else if (ctx->pc != 0x1FD988u) { ctx->pc = 0x1FD988u; }
    }
    if (ctx->pc != 0x1FD988u) { return; }
    ctx->pc = 0x1FD988u;
    // 0x1fd988: 0x26100001
    ctx->pc = 0x1fd988u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fd98c: 0x2a021000
    ctx->pc = 0x1fd98cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4096));
    // 0x1fd990: 0x0
    ctx->pc = 0x1fd990u;
    // NOP
    // 0x1fd994: 0x0
    ctx->pc = 0x1fd994u;
    // NOP
    // 0x1fd998: 0x1440fff9
    ctx->pc = 0x1FD998u;
    {
        const bool branch_taken_0x1fd998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1fd998) {
            ctx->pc = 0x1FD980u;
            goto label_1fd980;
        }
    }
    ctx->pc = 0x1FD9A0u;
    // 0x1fd9a0: 0x10000032
    ctx->pc = 0x1FD9A0u;
    {
        const bool branch_taken_0x1fd9a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD9A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fd9a0) {
            ctx->pc = 0x1FDA6Cu;
            goto label_1fda6c;
        }
    }
    ctx->pc = 0x1FD9A8u;
label_1fd9a8:
    // 0x1fd9a8: 0x8c2494b0
    ctx->pc = 0x1fd9a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fd9ac: 0x3c020052
    ctx->pc = 0x1fd9acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fd9b0: 0x244394d0
    ctx->pc = 0x1fd9b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fd9b4: 0x2402fffe
    ctx->pc = 0x1fd9b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fd9b8: 0x642021
    ctx->pc = 0x1fd9b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fd9bc: 0x80830000
    ctx->pc = 0x1fd9bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd9c0: 0x14620007
    ctx->pc = 0x1FD9C0u;
    {
        const bool branch_taken_0x1fd9c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1FD9C4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
        if (branch_taken_0x1fd9c0) {
            ctx->pc = 0x1FD9E0u;
            goto label_1fd9e0;
        }
    }
    ctx->pc = 0x1FD9C8u;
    // 0x1fd9c8: 0xa0800000
    ctx->pc = 0x1fd9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fd9cc: 0x3c010052
    ctx->pc = 0x1fd9ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd9d0: 0xc0687c0
    ctx->pc = 0x1FD9D0u;
    SET_GPR_U32(ctx, 31, 0x1FD9D8u);
    ctx->pc = 0x1FD9D4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    ctx->pc = 0x1A1F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Free_0x1a1f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD9D8u; }
        else if (ctx->pc != 0x1FD9D8u) { ctx->pc = 0x1FD9D8u; }
    }
    if (ctx->pc != 0x1FD9D8u) { return; }
    ctx->pc = 0x1FD9D8u;
    // 0x1fd9d8: 0x10000024
    ctx->pc = 0x1FD9D8u;
    {
        const bool branch_taken_0x1fd9d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FD9DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1fd9d8) {
            ctx->pc = 0x1FDA6Cu;
            goto label_1fda6c;
        }
    }
    ctx->pc = 0x1FD9E0u;
label_1fd9e0:
    // 0x1fd9e0: 0x8c2694b4
    ctx->pc = 0x1fd9e0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939828)));
    // 0x1fd9e4: 0x3c020050
    ctx->pc = 0x1fd9e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1fd9e8: 0x2444ea24
    ctx->pc = 0x1fd9e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x1fd9ec: 0x2402ffc0
    ctx->pc = 0x1fd9ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1fd9f0: 0x3c010052
    ctx->pc = 0x1fd9f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fd9f4: 0x8c2394bc
    ctx->pc = 0x1fd9f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fd9f8: 0x62c03
    ctx->pc = 0x1fd9f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1fd9fc: 0x30a5ffff
    ctx->pc = 0x1fd9fcu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x1fda00: 0x52900
    ctx->pc = 0x1fda00u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fda04: 0x852021
    ctx->pc = 0x1fda04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fda08: 0x8c840000
    ctx->pc = 0x1fda08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fda0c: 0x2463003f
    ctx->pc = 0x1fda0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1fda10: 0x30c6ffff
    ctx->pc = 0x1fda10u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65535));
    // 0x1fda14: 0x622824
    ctx->pc = 0x1fda14u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fda18: 0x61040
    ctx->pc = 0x1fda18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fda1c: 0x461021
    ctx->pc = 0x1fda1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fda20: 0x21080
    ctx->pc = 0x1fda20u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fda24: 0x821021
    ctx->pc = 0x1fda24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1fda28: 0xc06a97c
    ctx->pc = 0x1FDA28u;
    SET_GPR_U32(ctx, 31, 0x1FDA30u);
    ctx->pc = 0x1FDA2Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1AA5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutLinkOneSkinStripData_0x1aa5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDA30u; }
        else if (ctx->pc != 0x1FDA30u) { ctx->pc = 0x1FDA30u; }
    }
    if (ctx->pc != 0x1FDA30u) { return; }
    ctx->pc = 0x1FDA30u;
    // 0x1fda30: 0x3c010052
    ctx->pc = 0x1fda30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fda34: 0x8c2694bc
    ctx->pc = 0x1fda34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294939836)));
    // 0x1fda38: 0x3c020051
    ctx->pc = 0x1fda38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1fda3c: 0x244425f0
    ctx->pc = 0x1fda3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9712));
    // 0x1fda40: 0x3c020052
    ctx->pc = 0x1fda40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fda44: 0x244294d0
    ctx->pc = 0x1fda44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x1fda48: 0x24030001
    ctx->pc = 0x1fda48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fda4c: 0x3c010052
    ctx->pc = 0x1fda4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fda50: 0x8c2594b0
    ctx->pc = 0x1fda50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294939824)));
    // 0x1fda54: 0x451021
    ctx->pc = 0x1fda54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fda58: 0x52880
    ctx->pc = 0x1fda58u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fda5c: 0x852021
    ctx->pc = 0x1fda5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fda60: 0xac860000
    ctx->pc = 0x1fda60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1fda64: 0xa0430000
    ctx->pc = 0x1fda64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fda68: 0x2402ffff
    ctx->pc = 0x1fda68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1fda6c:
    // 0x1fda6c: 0x7bbf0010
    ctx->pc = 0x1fda6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fda70: 0x7bb00000
    ctx->pc = 0x1fda70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fda74: 0x3e00008
    ctx->pc = 0x1FDA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD980u: goto label_1fd980;
            case 0x1FD9A8u: goto label_1fd9a8;
            case 0x1FD9E0u: goto label_1fd9e0;
            case 0x1FDA6Cu: goto label_1fda6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FDA7Cu;
}
