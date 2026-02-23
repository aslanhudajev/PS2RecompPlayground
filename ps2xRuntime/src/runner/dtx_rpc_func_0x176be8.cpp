#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dtx_rpc_func
// Address: 0x176be8 - 0x176cb4
void dtx_rpc_func_0x176be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dtx_rpc_func");


    ctx->pc = 0x176be8u;

label_176be8:
    // 0x176be8: 0x27bdffc0
    ctx->pc = 0x176be8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_176bec:
    // 0x176bec: 0xffb20020
    ctx->pc = 0x176becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_176bf0:
    // 0x176bf0: 0xffb10010
    ctx->pc = 0x176bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_176bf4:
    // 0x176bf4: 0xc0902d
    ctx->pc = 0x176bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_176bf8:
    // 0x176bf8: 0xffb00000
    ctx->pc = 0x176bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176bfc:
    // 0x176bfc: 0xa0882d
    ctx->pc = 0x176bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_176c00:
    // 0x176c00: 0xffbf0030
    ctx->pc = 0x176c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_176c04:
    // 0x176c04: 0xc05efbc
label_176c08:
    if (ctx->pc == 0x176C08u) {
        ctx->pc = 0x176C08u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x176C0Cu;
        goto label_176c0c;
    }
    ctx->pc = 0x176C04u;
    SET_GPR_U32(ctx, 31, 0x176C0Cu);
    ctx->pc = 0x176C08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C0Cu; }
        else if (ctx->pc != 0x176C0Cu) { ctx->pc = 0x176C0Cu; }
    }
    if (ctx->pc != 0x176C0Cu) { return; }
    ctx->pc = 0x176C0Cu;
label_176c0c:
    // 0x176c0c: 0x24020002
    ctx->pc = 0x176c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_176c10:
    // 0x176c10: 0x12020016
label_176c14:
    if (ctx->pc == 0x176C14u) {
        ctx->pc = 0x176C14u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x176C18u;
        goto label_176c18;
    }
    ctx->pc = 0x176C10u;
    {
        const bool branch_taken_0x176c10 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x176C14u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x176c10) {
            ctx->pc = 0x176C6Cu;
            goto label_176c6c;
        }
    }
    ctx->pc = 0x176C18u;
label_176c18:
    // 0x176c18: 0x1440001d
label_176c1c:
    if (ctx->pc == 0x176C1Cu) {
        ctx->pc = 0x176C1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x176C20u;
        goto label_176c20;
    }
    ctx->pc = 0x176C18u;
    {
        const bool branch_taken_0x176c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x176C1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x176c18) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C20u;
label_176c20:
    // 0x176c20: 0x12020019
label_176c24:
    if (ctx->pc == 0x176C24u) {
        ctx->pc = 0x176C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966272));
        ctx->pc = 0x176C28u;
        goto label_176c28;
    }
    ctx->pc = 0x176C20u;
    {
        const bool branch_taken_0x176c20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x176C24u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294966272));
        if (branch_taken_0x176c20) {
            ctx->pc = 0x176C88u;
            goto label_176c88;
        }
    }
    ctx->pc = 0x176C28u;
label_176c28:
    // 0x176c28: 0x2c820040
    ctx->pc = 0x176c28u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 64));
label_176c2c:
    // 0x176c2c: 0x10400018
label_176c30:
    if (ctx->pc == 0x176C30u) {
        ctx->pc = 0x176C30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x176C34u;
        goto label_176c34;
    }
    ctx->pc = 0x176C2Cu;
    {
        const bool branch_taken_0x176c2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x176C30u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x176c2c) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C34u;
label_176c34:
    // 0x176c34: 0x42080
    ctx->pc = 0x176c34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
label_176c38:
    // 0x176c38: 0x24429160
    ctx->pc = 0x176c38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294938976));
label_176c3c:
    // 0x176c3c: 0x821021
    ctx->pc = 0x176c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_176c40:
    // 0x176c40: 0x8c430000
    ctx->pc = 0x176c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_176c44:
    // 0x176c44: 0x10600012
label_176c48:
    if (ctx->pc == 0x176C48u) {
        ctx->pc = 0x176C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x176C4Cu;
        goto label_176c4c;
    }
    ctx->pc = 0x176C44u;
    {
        const bool branch_taken_0x176c44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x176C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x176c44) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C4Cu;
label_176c4c:
    // 0x176c4c: 0x123082
    ctx->pc = 0x176c4cu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 18), 2));
label_176c50:
    // 0x176c50: 0x24429260
    ctx->pc = 0x176c50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939232));
label_176c54:
    // 0x176c54: 0x220282d
    ctx->pc = 0x176c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176c58:
    // 0x176c58: 0x821021
    ctx->pc = 0x176c58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_176c5c:
    // 0x176c5c: 0x60f809
label_176c60:
    if (ctx->pc == 0x176C60u) {
        ctx->pc = 0x176C60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x176C64u;
        goto label_176c64;
    }
    ctx->pc = 0x176C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x176C64u);
        ctx->pc = 0x176C60u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176BE8u: goto label_176be8;
            case 0x176BECu: goto label_176bec;
            case 0x176BF0u: goto label_176bf0;
            case 0x176BF4u: goto label_176bf4;
            case 0x176BF8u: goto label_176bf8;
            case 0x176BFCu: goto label_176bfc;
            case 0x176C00u: goto label_176c00;
            case 0x176C04u: goto label_176c04;
            case 0x176C08u: goto label_176c08;
            case 0x176C0Cu: goto label_176c0c;
            case 0x176C10u: goto label_176c10;
            case 0x176C14u: goto label_176c14;
            case 0x176C18u: goto label_176c18;
            case 0x176C1Cu: goto label_176c1c;
            case 0x176C20u: goto label_176c20;
            case 0x176C24u: goto label_176c24;
            case 0x176C28u: goto label_176c28;
            case 0x176C2Cu: goto label_176c2c;
            case 0x176C30u: goto label_176c30;
            case 0x176C34u: goto label_176c34;
            case 0x176C38u: goto label_176c38;
            case 0x176C3Cu: goto label_176c3c;
            case 0x176C40u: goto label_176c40;
            case 0x176C44u: goto label_176c44;
            case 0x176C48u: goto label_176c48;
            case 0x176C4Cu: goto label_176c4c;
            case 0x176C50u: goto label_176c50;
            case 0x176C54u: goto label_176c54;
            case 0x176C58u: goto label_176c58;
            case 0x176C5Cu: goto label_176c5c;
            case 0x176C60u: goto label_176c60;
            case 0x176C64u: goto label_176c64;
            case 0x176C68u: goto label_176c68;
            case 0x176C6Cu: goto label_176c6c;
            case 0x176C70u: goto label_176c70;
            case 0x176C74u: goto label_176c74;
            case 0x176C78u: goto label_176c78;
            case 0x176C7Cu: goto label_176c7c;
            case 0x176C80u: goto label_176c80;
            case 0x176C84u: goto label_176c84;
            case 0x176C88u: goto label_176c88;
            case 0x176C8Cu: goto label_176c8c;
            case 0x176C90u: goto label_176c90;
            case 0x176C94u: goto label_176c94;
            case 0x176C98u: goto label_176c98;
            case 0x176C9Cu: goto label_176c9c;
            case 0x176CA0u: goto label_176ca0;
            case 0x176CA4u: goto label_176ca4;
            case 0x176CA8u: goto label_176ca8;
            case 0x176CACu: goto label_176cac;
            case 0x176CB0u: goto label_176cb0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x176C64u; }
            if (ctx->pc != 0x176C64u) { return; }
        }
    }
    ctx->pc = 0x176C64u;
label_176c64:
    // 0x176c64: 0x1000000a
label_176c68:
    if (ctx->pc == 0x176C68u) {
        ctx->pc = 0x176C6Cu;
        goto label_176c6c;
    }
    ctx->pc = 0x176C64u;
    {
        const bool branch_taken_0x176c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x176c64) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C6Cu;
label_176c6c:
    // 0x176c6c: 0x8e240000
    ctx->pc = 0x176c6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_176c70:
    // 0x176c70: 0x8e250004
    ctx->pc = 0x176c70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_176c74:
    // 0x176c74: 0x8e260008
    ctx->pc = 0x176c74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_176c78:
    // 0x176c78: 0xc05dbac
label_176c7c:
    if (ctx->pc == 0x176C7Cu) {
        ctx->pc = 0x176C7Cu;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x176C80u;
        goto label_176c80;
    }
    ctx->pc = 0x176C78u;
    SET_GPR_U32(ctx, 31, 0x176C80u);
    ctx->pc = 0x176C7Cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x176EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Create_0x176eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C80u; }
        else if (ctx->pc != 0x176C80u) { ctx->pc = 0x176C80u; }
    }
    if (ctx->pc != 0x176C80u) { return; }
    ctx->pc = 0x176C80u;
label_176c80:
    // 0x176c80: 0x10000003
label_176c84:
    if (ctx->pc == 0x176C84u) {
        ctx->pc = 0x176C84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x176C88u;
        goto label_176c88;
    }
    ctx->pc = 0x176C80u;
    {
        const bool branch_taken_0x176c80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x176C84u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x176c80) {
            ctx->pc = 0x176C90u;
            goto label_176c90;
        }
    }
    ctx->pc = 0x176C88u;
label_176c88:
    // 0x176c88: 0xc05dc12
label_176c8c:
    if (ctx->pc == 0x176C8Cu) {
        ctx->pc = 0x176C8Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x176C90u;
        goto label_176c90;
    }
    ctx->pc = 0x176C88u;
    SET_GPR_U32(ctx, 31, 0x176C90u);
    ctx->pc = 0x176C8Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x177048u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Destroy_0x177048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C90u; }
        else if (ctx->pc != 0x176C90u) { ctx->pc = 0x176C90u; }
    }
    if (ctx->pc != 0x176C90u) { return; }
    ctx->pc = 0x176C90u;
label_176c90:
    // 0x176c90: 0xc05efc2
label_176c94:
    if (ctx->pc == 0x176C94u) {
        ctx->pc = 0x176C98u;
        goto label_176c98;
    }
    ctx->pc = 0x176C90u;
    SET_GPR_U32(ctx, 31, 0x176C98u);
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176C98u; }
        else if (ctx->pc != 0x176C98u) { ctx->pc = 0x176C98u; }
    }
    if (ctx->pc != 0x176C98u) { return; }
    ctx->pc = 0x176C98u;
label_176c98:
    // 0x176c98: 0x220102d
    ctx->pc = 0x176c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176c9c:
    // 0x176c9c: 0xdfbf0030
    ctx->pc = 0x176c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_176ca0:
    // 0x176ca0: 0xdfb20020
    ctx->pc = 0x176ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_176ca4:
    // 0x176ca4: 0xdfb10010
    ctx->pc = 0x176ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176ca8:
    // 0x176ca8: 0xdfb00000
    ctx->pc = 0x176ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176cac:
    // 0x176cac: 0x3e00008
label_176cb0:
    if (ctx->pc == 0x176CB0u) {
        ctx->pc = 0x176CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x176CB4u;
        goto label_fallthrough_0x176cac;
    }
    ctx->pc = 0x176CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176BE8u: goto label_176be8;
            case 0x176BECu: goto label_176bec;
            case 0x176BF0u: goto label_176bf0;
            case 0x176BF4u: goto label_176bf4;
            case 0x176BF8u: goto label_176bf8;
            case 0x176BFCu: goto label_176bfc;
            case 0x176C00u: goto label_176c00;
            case 0x176C04u: goto label_176c04;
            case 0x176C08u: goto label_176c08;
            case 0x176C0Cu: goto label_176c0c;
            case 0x176C10u: goto label_176c10;
            case 0x176C14u: goto label_176c14;
            case 0x176C18u: goto label_176c18;
            case 0x176C1Cu: goto label_176c1c;
            case 0x176C20u: goto label_176c20;
            case 0x176C24u: goto label_176c24;
            case 0x176C28u: goto label_176c28;
            case 0x176C2Cu: goto label_176c2c;
            case 0x176C30u: goto label_176c30;
            case 0x176C34u: goto label_176c34;
            case 0x176C38u: goto label_176c38;
            case 0x176C3Cu: goto label_176c3c;
            case 0x176C40u: goto label_176c40;
            case 0x176C44u: goto label_176c44;
            case 0x176C48u: goto label_176c48;
            case 0x176C4Cu: goto label_176c4c;
            case 0x176C50u: goto label_176c50;
            case 0x176C54u: goto label_176c54;
            case 0x176C58u: goto label_176c58;
            case 0x176C5Cu: goto label_176c5c;
            case 0x176C60u: goto label_176c60;
            case 0x176C64u: goto label_176c64;
            case 0x176C68u: goto label_176c68;
            case 0x176C6Cu: goto label_176c6c;
            case 0x176C70u: goto label_176c70;
            case 0x176C74u: goto label_176c74;
            case 0x176C78u: goto label_176c78;
            case 0x176C7Cu: goto label_176c7c;
            case 0x176C80u: goto label_176c80;
            case 0x176C84u: goto label_176c84;
            case 0x176C88u: goto label_176c88;
            case 0x176C8Cu: goto label_176c8c;
            case 0x176C90u: goto label_176c90;
            case 0x176C94u: goto label_176c94;
            case 0x176C98u: goto label_176c98;
            case 0x176C9Cu: goto label_176c9c;
            case 0x176CA0u: goto label_176ca0;
            case 0x176CA4u: goto label_176ca4;
            case 0x176CA8u: goto label_176ca8;
            case 0x176CACu: goto label_176cac;
            case 0x176CB0u: goto label_176cb0;
            default: break;
        }
        return;
    }
label_fallthrough_0x176cac:
    ctx->pc = 0x176CB4u;
}
