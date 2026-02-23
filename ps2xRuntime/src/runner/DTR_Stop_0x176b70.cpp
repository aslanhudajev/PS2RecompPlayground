#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTR_Stop
// Address: 0x176b70 - 0x176be4
void DTR_Stop_0x176b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTR_Stop");


    ctx->pc = 0x176b70u;

label_176b70:
    // 0x176b70: 0x27bdffe0
    ctx->pc = 0x176b70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_176b74:
    // 0x176b74: 0xffb00000
    ctx->pc = 0x176b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176b78:
    // 0x176b78: 0xffbf0010
    ctx->pc = 0x176b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176b7c:
    // 0x176b7c: 0x80802d
    ctx->pc = 0x176b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176b80:
    // 0x176b80: 0xa2000001
    ctx->pc = 0x176b80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_176b84:
    // 0x176b84: 0x8e02000c
    ctx->pc = 0x176b84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_176b88:
    // 0x176b88: 0x10400008
label_176b8c:
    if (ctx->pc == 0x176B8Cu) {
        ctx->pc = 0x176B8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x176B90u;
        goto label_176b90;
    }
    ctx->pc = 0x176B88u;
    {
        const bool branch_taken_0x176b88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176B8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x176b88) {
            ctx->pc = 0x176BACu;
            goto label_176bac;
        }
    }
    ctx->pc = 0x176B90u;
label_176b90:
    // 0x176b90: 0x8e040004
    ctx->pc = 0x176b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_176b94:
    // 0x176b94: 0x8c830000
    ctx->pc = 0x176b94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176b98:
    // 0x176b98: 0x8c62001c
    ctx->pc = 0x176b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176b9c:
    // 0x176b9c: 0x40f809
label_176ba0:
    if (ctx->pc == 0x176BA0u) {
        ctx->pc = 0x176BA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x176BA4u;
        goto label_176ba4;
    }
    ctx->pc = 0x176B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176BA4u);
        ctx->pc = 0x176BA0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176B70u: goto label_176b70;
            case 0x176B74u: goto label_176b74;
            case 0x176B78u: goto label_176b78;
            case 0x176B7Cu: goto label_176b7c;
            case 0x176B80u: goto label_176b80;
            case 0x176B84u: goto label_176b84;
            case 0x176B88u: goto label_176b88;
            case 0x176B8Cu: goto label_176b8c;
            case 0x176B90u: goto label_176b90;
            case 0x176B94u: goto label_176b94;
            case 0x176B98u: goto label_176b98;
            case 0x176B9Cu: goto label_176b9c;
            case 0x176BA0u: goto label_176ba0;
            case 0x176BA4u: goto label_176ba4;
            case 0x176BA8u: goto label_176ba8;
            case 0x176BACu: goto label_176bac;
            case 0x176BB0u: goto label_176bb0;
            case 0x176BB4u: goto label_176bb4;
            case 0x176BB8u: goto label_176bb8;
            case 0x176BBCu: goto label_176bbc;
            case 0x176BC0u: goto label_176bc0;
            case 0x176BC4u: goto label_176bc4;
            case 0x176BC8u: goto label_176bc8;
            case 0x176BCCu: goto label_176bcc;
            case 0x176BD0u: goto label_176bd0;
            case 0x176BD4u: goto label_176bd4;
            case 0x176BD8u: goto label_176bd8;
            case 0x176BDCu: goto label_176bdc;
            case 0x176BE0u: goto label_176be0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176BA4u; }
            if (ctx->pc != 0x176BA4u) { return; }
        }
    }
    ctx->pc = 0x176BA4u;
label_176ba4:
    // 0x176ba4: 0xae00000c
    ctx->pc = 0x176ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_176ba8:
    // 0x176ba8: 0xae000010
    ctx->pc = 0x176ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_176bac:
    // 0x176bac: 0x8e020014
    ctx->pc = 0x176bacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_176bb0:
    // 0x176bb0: 0x10400008
label_176bb4:
    if (ctx->pc == 0x176BB4u) {
        ctx->pc = 0x176BB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176BB8u;
        goto label_176bb8;
    }
    ctx->pc = 0x176BB0u;
    {
        const bool branch_taken_0x176bb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176BB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x176bb0) {
            ctx->pc = 0x176BD4u;
            goto label_176bd4;
        }
    }
    ctx->pc = 0x176BB8u;
label_176bb8:
    // 0x176bb8: 0x8e040008
    ctx->pc = 0x176bb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_176bbc:
    // 0x176bbc: 0x8c830000
    ctx->pc = 0x176bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_176bc0:
    // 0x176bc0: 0x8c62001c
    ctx->pc = 0x176bc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_176bc4:
    // 0x176bc4: 0x40f809
label_176bc8:
    if (ctx->pc == 0x176BC8u) {
        ctx->pc = 0x176BC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x176BCCu;
        goto label_176bcc;
    }
    ctx->pc = 0x176BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176BCCu);
        ctx->pc = 0x176BC8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176B70u: goto label_176b70;
            case 0x176B74u: goto label_176b74;
            case 0x176B78u: goto label_176b78;
            case 0x176B7Cu: goto label_176b7c;
            case 0x176B80u: goto label_176b80;
            case 0x176B84u: goto label_176b84;
            case 0x176B88u: goto label_176b88;
            case 0x176B8Cu: goto label_176b8c;
            case 0x176B90u: goto label_176b90;
            case 0x176B94u: goto label_176b94;
            case 0x176B98u: goto label_176b98;
            case 0x176B9Cu: goto label_176b9c;
            case 0x176BA0u: goto label_176ba0;
            case 0x176BA4u: goto label_176ba4;
            case 0x176BA8u: goto label_176ba8;
            case 0x176BACu: goto label_176bac;
            case 0x176BB0u: goto label_176bb0;
            case 0x176BB4u: goto label_176bb4;
            case 0x176BB8u: goto label_176bb8;
            case 0x176BBCu: goto label_176bbc;
            case 0x176BC0u: goto label_176bc0;
            case 0x176BC4u: goto label_176bc4;
            case 0x176BC8u: goto label_176bc8;
            case 0x176BCCu: goto label_176bcc;
            case 0x176BD0u: goto label_176bd0;
            case 0x176BD4u: goto label_176bd4;
            case 0x176BD8u: goto label_176bd8;
            case 0x176BDCu: goto label_176bdc;
            case 0x176BE0u: goto label_176be0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176BCCu; }
            if (ctx->pc != 0x176BCCu) { return; }
        }
    }
    ctx->pc = 0x176BCCu;
label_176bcc:
    // 0x176bcc: 0xae000018
    ctx->pc = 0x176bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_176bd0:
    // 0x176bd0: 0xae000014
    ctx->pc = 0x176bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_176bd4:
    // 0x176bd4: 0xdfbf0010
    ctx->pc = 0x176bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176bd8:
    // 0x176bd8: 0xdfb00000
    ctx->pc = 0x176bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176bdc:
    // 0x176bdc: 0x3e00008
label_176be0:
    if (ctx->pc == 0x176BE0u) {
        ctx->pc = 0x176BE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x176BE4u;
        goto label_fallthrough_0x176bdc;
    }
    ctx->pc = 0x176BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176BE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176B70u: goto label_176b70;
            case 0x176B74u: goto label_176b74;
            case 0x176B78u: goto label_176b78;
            case 0x176B7Cu: goto label_176b7c;
            case 0x176B80u: goto label_176b80;
            case 0x176B84u: goto label_176b84;
            case 0x176B88u: goto label_176b88;
            case 0x176B8Cu: goto label_176b8c;
            case 0x176B90u: goto label_176b90;
            case 0x176B94u: goto label_176b94;
            case 0x176B98u: goto label_176b98;
            case 0x176B9Cu: goto label_176b9c;
            case 0x176BA0u: goto label_176ba0;
            case 0x176BA4u: goto label_176ba4;
            case 0x176BA8u: goto label_176ba8;
            case 0x176BACu: goto label_176bac;
            case 0x176BB0u: goto label_176bb0;
            case 0x176BB4u: goto label_176bb4;
            case 0x176BB8u: goto label_176bb8;
            case 0x176BBCu: goto label_176bbc;
            case 0x176BC0u: goto label_176bc0;
            case 0x176BC4u: goto label_176bc4;
            case 0x176BC8u: goto label_176bc8;
            case 0x176BCCu: goto label_176bcc;
            case 0x176BD0u: goto label_176bd0;
            case 0x176BD4u: goto label_176bd4;
            case 0x176BD8u: goto label_176bd8;
            case 0x176BDCu: goto label_176bdc;
            case 0x176BE0u: goto label_176be0;
            default: break;
        }
        return;
    }
label_fallthrough_0x176bdc:
    ctx->pc = 0x176BE4u;
}
