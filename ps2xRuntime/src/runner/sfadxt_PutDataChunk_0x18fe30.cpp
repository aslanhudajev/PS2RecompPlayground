#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_PutDataChunk
// Address: 0x18fe30 - 0x18feb8
void sfadxt_PutDataChunk_0x18fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_PutDataChunk");


    ctx->pc = 0x18fe30u;

label_18fe30:
    // 0x18fe30: 0x27bdffc0
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_18fe34:
    // 0x18fe34: 0xffb10020
    ctx->pc = 0x18fe34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_18fe38:
    // 0x18fe38: 0xffb00010
    ctx->pc = 0x18fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18fe3c:
    // 0x18fe3c: 0x80882d
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18fe40:
    // 0x18fe40: 0xffbf0030
    ctx->pc = 0x18fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18fe44:
    // 0x18fe44: 0x14a00007
label_18fe48:
    if (ctx->pc == 0x18FE48u) {
        ctx->pc = 0x18FE48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FE4Cu;
        goto label_18fe4c;
    }
    ctx->pc = 0x18FE44u;
    {
        const bool branch_taken_0x18fe44 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18FE48u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18fe44) {
            ctx->pc = 0x18FE64u;
            goto label_18fe64;
        }
    }
    ctx->pc = 0x18FE4Cu;
label_18fe4c:
    // 0x18fe4c: 0x8e230000
    ctx->pc = 0x18fe4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fe50:
    // 0x18fe50: 0x8c62001c
    ctx->pc = 0x18fe50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18fe54:
    // 0x18fe54: 0x40f809
label_18fe58:
    if (ctx->pc == 0x18FE58u) {
        ctx->pc = 0x18FE58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FE5Cu;
        goto label_18fe5c;
    }
    ctx->pc = 0x18FE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FE5Cu);
        ctx->pc = 0x18FE58u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE30u: goto label_18fe30;
            case 0x18FE34u: goto label_18fe34;
            case 0x18FE38u: goto label_18fe38;
            case 0x18FE3Cu: goto label_18fe3c;
            case 0x18FE40u: goto label_18fe40;
            case 0x18FE44u: goto label_18fe44;
            case 0x18FE48u: goto label_18fe48;
            case 0x18FE4Cu: goto label_18fe4c;
            case 0x18FE50u: goto label_18fe50;
            case 0x18FE54u: goto label_18fe54;
            case 0x18FE58u: goto label_18fe58;
            case 0x18FE5Cu: goto label_18fe5c;
            case 0x18FE60u: goto label_18fe60;
            case 0x18FE64u: goto label_18fe64;
            case 0x18FE68u: goto label_18fe68;
            case 0x18FE6Cu: goto label_18fe6c;
            case 0x18FE70u: goto label_18fe70;
            case 0x18FE74u: goto label_18fe74;
            case 0x18FE78u: goto label_18fe78;
            case 0x18FE7Cu: goto label_18fe7c;
            case 0x18FE80u: goto label_18fe80;
            case 0x18FE84u: goto label_18fe84;
            case 0x18FE88u: goto label_18fe88;
            case 0x18FE8Cu: goto label_18fe8c;
            case 0x18FE90u: goto label_18fe90;
            case 0x18FE94u: goto label_18fe94;
            case 0x18FE98u: goto label_18fe98;
            case 0x18FE9Cu: goto label_18fe9c;
            case 0x18FEA0u: goto label_18fea0;
            case 0x18FEA4u: goto label_18fea4;
            case 0x18FEA8u: goto label_18fea8;
            case 0x18FEACu: goto label_18feac;
            case 0x18FEB0u: goto label_18feb0;
            case 0x18FEB4u: goto label_18feb4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FE5Cu; }
            if (ctx->pc != 0x18FE5Cu) { return; }
        }
    }
    ctx->pc = 0x18FE5Cu;
label_18fe5c:
    // 0x18fe5c: 0x10000012
label_18fe60:
    if (ctx->pc == 0x18FE60u) {
        ctx->pc = 0x18FE60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x18FE64u;
        goto label_18fe64;
    }
    ctx->pc = 0x18FE5Cu;
    {
        const bool branch_taken_0x18fe5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18FE60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x18fe5c) {
            ctx->pc = 0x18FEA8u;
            goto label_18fea8;
        }
    }
    ctx->pc = 0x18FE64u;
label_18fe64:
    // 0x18fe64: 0x200202d
    ctx->pc = 0x18fe64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fe68:
    // 0x18fe68: 0x200302d
    ctx->pc = 0x18fe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fe6c:
    // 0x18fe6c: 0xc05f4b0
label_18fe70:
    if (ctx->pc == 0x18FE70u) {
        ctx->pc = 0x18FE70u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FE74u;
        goto label_18fe74;
    }
    ctx->pc = 0x18FE6Cu;
    SET_GPR_U32(ctx, 31, 0x18FE74u);
    ctx->pc = 0x18FE70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJ_SplitChunk_0x17d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE74u; }
        else if (ctx->pc != 0x18FE74u) { ctx->pc = 0x18FE74u; }
    }
    if (ctx->pc != 0x18FE74u) { return; }
    ctx->pc = 0x18FE74u;
label_18fe74:
    // 0x18fe74: 0x8e230000
    ctx->pc = 0x18fe74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fe78:
    // 0x18fe78: 0x200302d
    ctx->pc = 0x18fe78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fe7c:
    // 0x18fe7c: 0x220202d
    ctx->pc = 0x18fe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fe80:
    // 0x18fe80: 0x8c620020
    ctx->pc = 0x18fe80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18fe84:
    // 0x18fe84: 0x40f809
label_18fe88:
    if (ctx->pc == 0x18FE88u) {
        ctx->pc = 0x18FE88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18FE8Cu;
        goto label_18fe8c;
    }
    ctx->pc = 0x18FE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FE8Cu);
        ctx->pc = 0x18FE88u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE30u: goto label_18fe30;
            case 0x18FE34u: goto label_18fe34;
            case 0x18FE38u: goto label_18fe38;
            case 0x18FE3Cu: goto label_18fe3c;
            case 0x18FE40u: goto label_18fe40;
            case 0x18FE44u: goto label_18fe44;
            case 0x18FE48u: goto label_18fe48;
            case 0x18FE4Cu: goto label_18fe4c;
            case 0x18FE50u: goto label_18fe50;
            case 0x18FE54u: goto label_18fe54;
            case 0x18FE58u: goto label_18fe58;
            case 0x18FE5Cu: goto label_18fe5c;
            case 0x18FE60u: goto label_18fe60;
            case 0x18FE64u: goto label_18fe64;
            case 0x18FE68u: goto label_18fe68;
            case 0x18FE6Cu: goto label_18fe6c;
            case 0x18FE70u: goto label_18fe70;
            case 0x18FE74u: goto label_18fe74;
            case 0x18FE78u: goto label_18fe78;
            case 0x18FE7Cu: goto label_18fe7c;
            case 0x18FE80u: goto label_18fe80;
            case 0x18FE84u: goto label_18fe84;
            case 0x18FE88u: goto label_18fe88;
            case 0x18FE8Cu: goto label_18fe8c;
            case 0x18FE90u: goto label_18fe90;
            case 0x18FE94u: goto label_18fe94;
            case 0x18FE98u: goto label_18fe98;
            case 0x18FE9Cu: goto label_18fe9c;
            case 0x18FEA0u: goto label_18fea0;
            case 0x18FEA4u: goto label_18fea4;
            case 0x18FEA8u: goto label_18fea8;
            case 0x18FEACu: goto label_18feac;
            case 0x18FEB0u: goto label_18feb0;
            case 0x18FEB4u: goto label_18feb4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FE8Cu; }
            if (ctx->pc != 0x18FE8Cu) { return; }
        }
    }
    ctx->pc = 0x18FE8Cu;
label_18fe8c:
    // 0x18fe8c: 0x8e230000
    ctx->pc = 0x18fe8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18fe90:
    // 0x18fe90: 0x220202d
    ctx->pc = 0x18fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fe94:
    // 0x18fe94: 0x282d
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fe98:
    // 0x18fe98: 0x8c62001c
    ctx->pc = 0x18fe98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_18fe9c:
    // 0x18fe9c: 0x40f809
label_18fea0:
    if (ctx->pc == 0x18FEA0u) {
        ctx->pc = 0x18FEA0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FEA4u;
        goto label_18fea4;
    }
    ctx->pc = 0x18FE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FEA4u);
        ctx->pc = 0x18FEA0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE30u: goto label_18fe30;
            case 0x18FE34u: goto label_18fe34;
            case 0x18FE38u: goto label_18fe38;
            case 0x18FE3Cu: goto label_18fe3c;
            case 0x18FE40u: goto label_18fe40;
            case 0x18FE44u: goto label_18fe44;
            case 0x18FE48u: goto label_18fe48;
            case 0x18FE4Cu: goto label_18fe4c;
            case 0x18FE50u: goto label_18fe50;
            case 0x18FE54u: goto label_18fe54;
            case 0x18FE58u: goto label_18fe58;
            case 0x18FE5Cu: goto label_18fe5c;
            case 0x18FE60u: goto label_18fe60;
            case 0x18FE64u: goto label_18fe64;
            case 0x18FE68u: goto label_18fe68;
            case 0x18FE6Cu: goto label_18fe6c;
            case 0x18FE70u: goto label_18fe70;
            case 0x18FE74u: goto label_18fe74;
            case 0x18FE78u: goto label_18fe78;
            case 0x18FE7Cu: goto label_18fe7c;
            case 0x18FE80u: goto label_18fe80;
            case 0x18FE84u: goto label_18fe84;
            case 0x18FE88u: goto label_18fe88;
            case 0x18FE8Cu: goto label_18fe8c;
            case 0x18FE90u: goto label_18fe90;
            case 0x18FE94u: goto label_18fe94;
            case 0x18FE98u: goto label_18fe98;
            case 0x18FE9Cu: goto label_18fe9c;
            case 0x18FEA0u: goto label_18fea0;
            case 0x18FEA4u: goto label_18fea4;
            case 0x18FEA8u: goto label_18fea8;
            case 0x18FEACu: goto label_18feac;
            case 0x18FEB0u: goto label_18feb0;
            case 0x18FEB4u: goto label_18feb4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FEA4u; }
            if (ctx->pc != 0x18FEA4u) { return; }
        }
    }
    ctx->pc = 0x18FEA4u;
label_18fea4:
    // 0x18fea4: 0xdfbf0030
    ctx->pc = 0x18fea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18fea8:
    // 0x18fea8: 0xdfb10020
    ctx->pc = 0x18fea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18feac:
    // 0x18feac: 0xdfb00010
    ctx->pc = 0x18feacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18feb0:
    // 0x18feb0: 0x3e00008
label_18feb4:
    if (ctx->pc == 0x18FEB4u) {
        ctx->pc = 0x18FEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18FEB8u;
        goto label_fallthrough_0x18feb0;
    }
    ctx->pc = 0x18FEB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FEB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE30u: goto label_18fe30;
            case 0x18FE34u: goto label_18fe34;
            case 0x18FE38u: goto label_18fe38;
            case 0x18FE3Cu: goto label_18fe3c;
            case 0x18FE40u: goto label_18fe40;
            case 0x18FE44u: goto label_18fe44;
            case 0x18FE48u: goto label_18fe48;
            case 0x18FE4Cu: goto label_18fe4c;
            case 0x18FE50u: goto label_18fe50;
            case 0x18FE54u: goto label_18fe54;
            case 0x18FE58u: goto label_18fe58;
            case 0x18FE5Cu: goto label_18fe5c;
            case 0x18FE60u: goto label_18fe60;
            case 0x18FE64u: goto label_18fe64;
            case 0x18FE68u: goto label_18fe68;
            case 0x18FE6Cu: goto label_18fe6c;
            case 0x18FE70u: goto label_18fe70;
            case 0x18FE74u: goto label_18fe74;
            case 0x18FE78u: goto label_18fe78;
            case 0x18FE7Cu: goto label_18fe7c;
            case 0x18FE80u: goto label_18fe80;
            case 0x18FE84u: goto label_18fe84;
            case 0x18FE88u: goto label_18fe88;
            case 0x18FE8Cu: goto label_18fe8c;
            case 0x18FE90u: goto label_18fe90;
            case 0x18FE94u: goto label_18fe94;
            case 0x18FE98u: goto label_18fe98;
            case 0x18FE9Cu: goto label_18fe9c;
            case 0x18FEA0u: goto label_18fea0;
            case 0x18FEA4u: goto label_18fea4;
            case 0x18FEA8u: goto label_18fea8;
            case 0x18FEACu: goto label_18feac;
            case 0x18FEB0u: goto label_18feb0;
            case 0x18FEB4u: goto label_18feb4;
            default: break;
        }
        return;
    }
label_fallthrough_0x18feb0:
    ctx->pc = 0x18FEB8u;
}
