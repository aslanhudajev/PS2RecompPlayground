#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: add_got_it
// Address: 0x22b1d0 - 0x22b250
void add_got_it_0x22b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b1d0u;

label_22b1d0:
    // 0x22b1d0: 0x3c020033
    ctx->pc = 0x22b1d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_22b1d4:
    // 0x22b1d4: 0x2447cb70
    ctx->pc = 0x22b1d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294953840));
label_22b1d8:
    // 0x22b1d8: 0x8c42cb70
    ctx->pc = 0x22b1d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953840)));
label_22b1dc:
    // 0x22b1dc: 0x10400008
label_22b1e0:
    if (ctx->pc == 0x22B1E0u) {
        ctx->pc = 0x22B1E0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22B1E4u;
        goto label_22b1e4;
    }
    ctx->pc = 0x22B1DCu;
    {
        const bool branch_taken_0x22b1dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B1E0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22b1dc) {
            ctx->pc = 0x22B200u;
            goto label_22b200;
        }
    }
    ctx->pc = 0x22B1E4u;
label_22b1e4:
    // 0x22b1e4: 0x24630001
    ctx->pc = 0x22b1e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_22b1e8:
    // 0x22b1e8: 0x28620018
    ctx->pc = 0x22b1e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 24));
label_22b1ec:
    // 0x22b1ec: 0x10400016
label_22b1f0:
    if (ctx->pc == 0x22B1F0u) {
        ctx->pc = 0x22B1F0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 28));
        ctx->pc = 0x22B1F4u;
        goto label_22b1f4;
    }
    ctx->pc = 0x22B1ECu;
    {
        const bool branch_taken_0x22b1ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B1F0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 28));
        if (branch_taken_0x22b1ec) {
            ctx->pc = 0x22B248u;
            goto label_22b248;
        }
    }
    ctx->pc = 0x22B1F4u;
label_22b1f4:
    // 0x22b1f4: 0x8ce20000
    ctx->pc = 0x22b1f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_22b1f8:
    // 0x22b1f8: 0x5440fffb
label_22b1fc:
    if (ctx->pc == 0x22B1FCu) {
        ctx->pc = 0x22B1FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x22B200u;
        goto label_22b200;
    }
    ctx->pc = 0x22B1F8u;
    {
        const bool branch_taken_0x22b1f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22b1f8) {
            ctx->pc = 0x22B1FCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x22B1E8u;
            goto label_22b1e8;
        }
    }
    ctx->pc = 0x22B200u;
label_22b200:
    // 0x22b200: 0x28620018
    ctx->pc = 0x22b200u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 24));
label_22b204:
    // 0x22b204: 0x10400010
label_22b208:
    if (ctx->pc == 0x22B208u) {
        ctx->pc = 0x22B208u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x22B20Cu;
        goto label_22b20c;
    }
    ctx->pc = 0x22B204u;
    {
        const bool branch_taken_0x22b204 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B208u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x22b204) {
            ctx->pc = 0x22B248u;
            goto label_22b248;
        }
    }
    ctx->pc = 0x22B20Cu;
label_22b20c:
    // 0x22b20c: 0x2c620010
    ctx->pc = 0x22b20cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_22b210:
    // 0x22b210: 0x1040000d
label_22b214:
    if (ctx->pc == 0x22B214u) {
        ctx->pc = 0x22B214u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x22B218u;
        goto label_22b218;
    }
    ctx->pc = 0x22B210u;
    {
        const bool branch_taken_0x22b210 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B214u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22b210) {
            ctx->pc = 0x22B248u;
            goto label_22b248;
        }
    }
    ctx->pc = 0x22B218u;
label_22b218:
    // 0x22b218: 0x244271d0
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 29136));
label_22b21c:
    // 0x22b21c: 0x31880
    ctx->pc = 0x22b21cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_22b220:
    // 0x22b220: 0x621821
    ctx->pc = 0x22b220u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22b224:
    // 0x22b224: 0x8c620000
    ctx->pc = 0x22b224u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22b228:
    // 0x22b228: 0x400008
label_22b22c:
    if (ctx->pc == 0x22B22Cu) {
        ctx->pc = 0x22B230u;
        goto label_22b230;
    }
    ctx->pc = 0x22B228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B1D0u: goto label_22b1d0;
            case 0x22B1D4u: goto label_22b1d4;
            case 0x22B1D8u: goto label_22b1d8;
            case 0x22B1DCu: goto label_22b1dc;
            case 0x22B1E0u: goto label_22b1e0;
            case 0x22B1E4u: goto label_22b1e4;
            case 0x22B1E8u: goto label_22b1e8;
            case 0x22B1ECu: goto label_22b1ec;
            case 0x22B1F0u: goto label_22b1f0;
            case 0x22B1F4u: goto label_22b1f4;
            case 0x22B1F8u: goto label_22b1f8;
            case 0x22B1FCu: goto label_22b1fc;
            case 0x22B200u: goto label_22b200;
            case 0x22B204u: goto label_22b204;
            case 0x22B208u: goto label_22b208;
            case 0x22B20Cu: goto label_22b20c;
            case 0x22B210u: goto label_22b210;
            case 0x22B214u: goto label_22b214;
            case 0x22B218u: goto label_22b218;
            case 0x22B21Cu: goto label_22b21c;
            case 0x22B220u: goto label_22b220;
            case 0x22B224u: goto label_22b224;
            case 0x22B228u: goto label_22b228;
            case 0x22B22Cu: goto label_22b22c;
            case 0x22B230u: goto label_22b230;
            case 0x22B234u: goto label_22b234;
            case 0x22B238u: goto label_22b238;
            case 0x22B23Cu: goto label_22b23c;
            case 0x22B240u: goto label_22b240;
            case 0x22B244u: goto label_22b244;
            case 0x22B248u: goto label_22b248;
            case 0x22B24Cu: goto label_22b24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B230u;
label_22b230:
    // 0x22b230: 0x24020001
    ctx->pc = 0x22b230u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_22b234:
    // 0x22b234: 0xace20000
    ctx->pc = 0x22b234u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_22b238:
    // 0x22b238: 0xace40004
    ctx->pc = 0x22b238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_22b23c:
    // 0x22b23c: 0xace50008
    ctx->pc = 0x22b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_22b240:
    // 0x22b240: 0xace6000c
    ctx->pc = 0x22b240u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
label_22b244:
    // 0x22b244: 0xace00010
    ctx->pc = 0x22b244u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_22b248:
    // 0x22b248: 0x3e00008
label_22b24c:
    if (ctx->pc == 0x22B24Cu) {
        ctx->pc = 0x22B250u;
        goto label_fallthrough_0x22b248;
    }
    ctx->pc = 0x22B248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B1D0u: goto label_22b1d0;
            case 0x22B1D4u: goto label_22b1d4;
            case 0x22B1D8u: goto label_22b1d8;
            case 0x22B1DCu: goto label_22b1dc;
            case 0x22B1E0u: goto label_22b1e0;
            case 0x22B1E4u: goto label_22b1e4;
            case 0x22B1E8u: goto label_22b1e8;
            case 0x22B1ECu: goto label_22b1ec;
            case 0x22B1F0u: goto label_22b1f0;
            case 0x22B1F4u: goto label_22b1f4;
            case 0x22B1F8u: goto label_22b1f8;
            case 0x22B1FCu: goto label_22b1fc;
            case 0x22B200u: goto label_22b200;
            case 0x22B204u: goto label_22b204;
            case 0x22B208u: goto label_22b208;
            case 0x22B20Cu: goto label_22b20c;
            case 0x22B210u: goto label_22b210;
            case 0x22B214u: goto label_22b214;
            case 0x22B218u: goto label_22b218;
            case 0x22B21Cu: goto label_22b21c;
            case 0x22B220u: goto label_22b220;
            case 0x22B224u: goto label_22b224;
            case 0x22B228u: goto label_22b228;
            case 0x22B22Cu: goto label_22b22c;
            case 0x22B230u: goto label_22b230;
            case 0x22B234u: goto label_22b234;
            case 0x22B238u: goto label_22b238;
            case 0x22B23Cu: goto label_22b23c;
            case 0x22B240u: goto label_22b240;
            case 0x22B244u: goto label_22b244;
            case 0x22B248u: goto label_22b248;
            case 0x22B24Cu: goto label_22b24c;
            default: break;
        }
        return;
    }
label_fallthrough_0x22b248:
    ctx->pc = 0x22B250u;
}
