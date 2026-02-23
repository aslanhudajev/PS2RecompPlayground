#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPSDEL_CheckDelim
// Address: 0x1821b0 - 0x18223c
void MPSDEL_CheckDelim_0x1821b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPSDEL_CheckDelim");


    ctx->pc = 0x1821b0u;

label_1821b0:
    // 0x1821b0: 0x90860000
    ctx->pc = 0x1821b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1821b4:
    // 0x1821b4: 0x90820001
    ctx->pc = 0x1821b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1821b8:
    // 0x1821b8: 0x63200
    ctx->pc = 0x1821b8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1821bc:
    // 0x1821bc: 0x90830002
    ctx->pc = 0x1821bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1821c0:
    // 0x1821c0: 0xc23025
    ctx->pc = 0x1821c0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1821c4:
    // 0x1821c4: 0x90850003
    ctx->pc = 0x1821c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1821c8:
    // 0x1821c8: 0x63200
    ctx->pc = 0x1821c8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1821cc:
    // 0x1821cc: 0xc33025
    ctx->pc = 0x1821ccu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1821d0:
    // 0x1821d0: 0x63200
    ctx->pc = 0x1821d0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1821d4:
    // 0x1821d4: 0xc53025
    ctx->pc = 0x1821d4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1821d8:
    // 0x1821d8: 0x24c3fe47
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294966855));
label_1821dc:
    // 0x1821dc: 0x2c620007
    ctx->pc = 0x1821dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 7));
label_1821e0:
    // 0x1821e0: 0x1040000f
label_1821e4:
    if (ctx->pc == 0x1821E4u) {
        ctx->pc = 0x1821E4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1821E8u;
        goto label_1821e8;
    }
    ctx->pc = 0x1821E0u;
    {
        const bool branch_taken_0x1821e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1821E4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1821e0) {
            ctx->pc = 0x182220u;
            goto label_182220;
        }
    }
    ctx->pc = 0x1821E8u;
label_1821e8:
    // 0x1821e8: 0x3c02002c
    ctx->pc = 0x1821e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
label_1821ec:
    // 0x1821ec: 0x2442c770
    ctx->pc = 0x1821ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952816));
label_1821f0:
    // 0x1821f0: 0x621821
    ctx->pc = 0x1821f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1821f4:
    // 0x1821f4: 0x8c640000
    ctx->pc = 0x1821f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1821f8:
    // 0x1821f8: 0x800008
label_1821fc:
    if (ctx->pc == 0x1821FCu) {
        ctx->pc = 0x182200u;
        goto label_182200;
    }
    ctx->pc = 0x1821F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1821B0u: goto label_1821b0;
            case 0x1821B4u: goto label_1821b4;
            case 0x1821B8u: goto label_1821b8;
            case 0x1821BCu: goto label_1821bc;
            case 0x1821C0u: goto label_1821c0;
            case 0x1821C4u: goto label_1821c4;
            case 0x1821C8u: goto label_1821c8;
            case 0x1821CCu: goto label_1821cc;
            case 0x1821D0u: goto label_1821d0;
            case 0x1821D4u: goto label_1821d4;
            case 0x1821D8u: goto label_1821d8;
            case 0x1821DCu: goto label_1821dc;
            case 0x1821E0u: goto label_1821e0;
            case 0x1821E4u: goto label_1821e4;
            case 0x1821E8u: goto label_1821e8;
            case 0x1821ECu: goto label_1821ec;
            case 0x1821F0u: goto label_1821f0;
            case 0x1821F4u: goto label_1821f4;
            case 0x1821F8u: goto label_1821f8;
            case 0x1821FCu: goto label_1821fc;
            case 0x182200u: goto label_182200;
            case 0x182204u: goto label_182204;
            case 0x182208u: goto label_182208;
            case 0x18220Cu: goto label_18220c;
            case 0x182210u: goto label_182210;
            case 0x182214u: goto label_182214;
            case 0x182218u: goto label_182218;
            case 0x18221Cu: goto label_18221c;
            case 0x182220u: goto label_182220;
            case 0x182224u: goto label_182224;
            case 0x182228u: goto label_182228;
            case 0x18222Cu: goto label_18222c;
            case 0x182230u: goto label_182230;
            case 0x182234u: goto label_182234;
            case 0x182238u: goto label_182238;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182200u;
label_182200:
    // 0x182200: 0x1000000c
label_182204:
    if (ctx->pc == 0x182204u) {
        ctx->pc = 0x182204u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        ctx->pc = 0x182208u;
        goto label_182208;
    }
    ctx->pc = 0x182200u;
    {
        const bool branch_taken_0x182200 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182204u;
        SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
        if (branch_taken_0x182200) {
            ctx->pc = 0x182234u;
            goto label_182234;
        }
    }
    ctx->pc = 0x182208u;
label_182208:
    // 0x182208: 0x1000000a
label_18220c:
    if (ctx->pc == 0x18220Cu) {
        ctx->pc = 0x18220Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
        ctx->pc = 0x182210u;
        goto label_182210;
    }
    ctx->pc = 0x182208u;
    {
        const bool branch_taken_0x182208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18220Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
        if (branch_taken_0x182208) {
            ctx->pc = 0x182234u;
            goto label_182234;
        }
    }
    ctx->pc = 0x182210u;
label_182210:
    // 0x182210: 0x10000008
label_182214:
    if (ctx->pc == 0x182214u) {
        ctx->pc = 0x182214u;
        SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
        ctx->pc = 0x182218u;
        goto label_182218;
    }
    ctx->pc = 0x182210u;
    {
        const bool branch_taken_0x182210 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182214u;
        SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
        if (branch_taken_0x182210) {
            ctx->pc = 0x182234u;
            goto label_182234;
        }
    }
    ctx->pc = 0x182218u;
label_182218:
    // 0x182218: 0x10000006
label_18221c:
    if (ctx->pc == 0x18221Cu) {
        ctx->pc = 0x18221Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
        ctx->pc = 0x182220u;
        goto label_182220;
    }
    ctx->pc = 0x182218u;
    {
        const bool branch_taken_0x182218 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18221Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
        if (branch_taken_0x182218) {
            ctx->pc = 0x182234u;
            goto label_182234;
        }
    }
    ctx->pc = 0x182220u;
label_182220:
    // 0x182220: 0x24c3fe40
    ctx->pc = 0x182220u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294966848));
label_182224:
    // 0x182224: 0x2402002f
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
label_182228:
    // 0x182228: 0x43102b
    ctx->pc = 0x182228u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18222c:
    // 0x18222c: 0x3c040004
    ctx->pc = 0x18222cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4 << 16));
label_182230:
    // 0x182230: 0x2200b
    ctx->pc = 0x182230u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_182234:
    // 0x182234: 0x3e00008
label_182238:
    if (ctx->pc == 0x182238u) {
        ctx->pc = 0x182238u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18223Cu;
        goto label_fallthrough_0x182234;
    }
    ctx->pc = 0x182234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182238u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1821B0u: goto label_1821b0;
            case 0x1821B4u: goto label_1821b4;
            case 0x1821B8u: goto label_1821b8;
            case 0x1821BCu: goto label_1821bc;
            case 0x1821C0u: goto label_1821c0;
            case 0x1821C4u: goto label_1821c4;
            case 0x1821C8u: goto label_1821c8;
            case 0x1821CCu: goto label_1821cc;
            case 0x1821D0u: goto label_1821d0;
            case 0x1821D4u: goto label_1821d4;
            case 0x1821D8u: goto label_1821d8;
            case 0x1821DCu: goto label_1821dc;
            case 0x1821E0u: goto label_1821e0;
            case 0x1821E4u: goto label_1821e4;
            case 0x1821E8u: goto label_1821e8;
            case 0x1821ECu: goto label_1821ec;
            case 0x1821F0u: goto label_1821f0;
            case 0x1821F4u: goto label_1821f4;
            case 0x1821F8u: goto label_1821f8;
            case 0x1821FCu: goto label_1821fc;
            case 0x182200u: goto label_182200;
            case 0x182204u: goto label_182204;
            case 0x182208u: goto label_182208;
            case 0x18220Cu: goto label_18220c;
            case 0x182210u: goto label_182210;
            case 0x182214u: goto label_182214;
            case 0x182218u: goto label_182218;
            case 0x18221Cu: goto label_18221c;
            case 0x182220u: goto label_182220;
            case 0x182224u: goto label_182224;
            case 0x182228u: goto label_182228;
            case 0x18222Cu: goto label_18222c;
            case 0x182230u: goto label_182230;
            case 0x182234u: goto label_182234;
            case 0x182238u: goto label_182238;
            default: break;
        }
        return;
    }
label_fallthrough_0x182234:
    ctx->pc = 0x18223Cu;
}
