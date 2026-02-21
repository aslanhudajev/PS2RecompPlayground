#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_FindTexture_Sub
// Address: 0x2c6d58 - 0x2c6ea0
void MBOX_FindTexture_Sub_0x2c6d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6d58u;

    // 0x2c6d58: 0x27bdff50
    ctx->pc = 0x2c6d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c6d5c: 0xffbf00a0
    ctx->pc = 0x2c6d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2c6d60: 0xffb60090
    ctx->pc = 0x2c6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2c6d64: 0xffb50080
    ctx->pc = 0x2c6d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2c6d68: 0xffb40070
    ctx->pc = 0x2c6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2c6d6c: 0xffb30060
    ctx->pc = 0x2c6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2c6d70: 0xffb20050
    ctx->pc = 0x2c6d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c6d74: 0xffb10040
    ctx->pc = 0x2c6d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2c6d78: 0xffb00030
    ctx->pc = 0x2c6d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c6d7c: 0x80182d
    ctx->pc = 0x2c6d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d80: 0xa0982d
    ctx->pc = 0x2c6d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d84: 0xc0802d
    ctx->pc = 0x2c6d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d88: 0xe0882d
    ctx->pc = 0x2c6d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d8c: 0x100b02d
    ctx->pc = 0x2c6d8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d90: 0x3c020036
    ctx->pc = 0x2c6d90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6d94: 0x8c54dee0
    ctx->pc = 0x2c6d94u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c6d98: 0x902d
    ctx->pc = 0x2c6d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d9c: 0x3a0202d
    ctx->pc = 0x2c6d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6da0: 0xc0b1998
    ctx->pc = 0x2C6DA0u;
    SET_GPR_U32(ctx, 31, 0x2C6DA8u);
    ctx->pc = 0x2C6DA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6660u;
    {
        const uint32_t __entryPc = ctx->pc;
        strCopyFix_0x2c6660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DA8u; }
    }
    if (ctx->pc != 0x2C6DA8u) { return; }
    ctx->pc = 0x2C6DA8u;
    // 0x2c6da8: 0x2402ffff
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6dac: 0x50102a
    ctx->pc = 0x2c6dacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x2c6db0: 0x6200006
    ctx->pc = 0x2C6DB0u;
    {
        const bool branch_taken_0x2c6db0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2C6DB4u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
        if (branch_taken_0x2c6db0) {
            ctx->pc = 0x2C6DCCu;
            goto label_2c6dcc;
        }
    }
    ctx->pc = 0x2C6DB8u;
    // 0x2c6db8: 0x3c020038
    ctx->pc = 0x2c6db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6dbc: 0x8c42c500
    ctx->pc = 0x2c6dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6dc0: 0x222102a
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2c6dc4: 0x14400005
    ctx->pc = 0x2C6DC4u;
    {
        const bool branch_taken_0x2c6dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C6DC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
        if (branch_taken_0x2c6dc4) {
            ctx->pc = 0x2C6DDCu;
            goto label_2c6ddc;
        }
    }
    ctx->pc = 0x2C6DCCu;
label_2c6dcc:
    // 0x2c6dcc: 0x3c020038
    ctx->pc = 0x2c6dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6dd0: 0x8c42c500
    ctx->pc = 0x2c6dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952192)));
    // 0x2c6dd4: 0x2451ffff
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6dd8: 0x230102a
    ctx->pc = 0x2c6dd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
label_2c6ddc:
    // 0x2c6ddc: 0x14400018
    ctx->pc = 0x2C6DDCu;
    {
        const bool branch_taken_0x2c6ddc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6ddc) {
            ctx->pc = 0x2C6E40u;
            goto label_2c6e40;
        }
    }
    ctx->pc = 0x2C6DE4u;
    // 0x2c6de4: 0x3c15002c
    ctx->pc = 0x2c6de4u;
    SET_GPR_U32(ctx, 21, ((uint32_t)44 << 16));
    // 0x2c6de8: 0x8e830038
    ctx->pc = 0x2c6de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x2c6dec: 0x0
    ctx->pc = 0x2c6decu;
    // NOP
label_2c6df0:
    // 0x2c6df0: 0x102100
    ctx->pc = 0x2c6df0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c6df4: 0x641021
    ctx->pc = 0x2c6df4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c6df8: 0x8c420010
    ctx->pc = 0x2c6df8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c6dfc: 0x5440000d
    ctx->pc = 0x2C6DFCu;
    {
        const bool branch_taken_0x2c6dfc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6dfc) {
            ctx->pc = 0x2C6E00u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2C6E34u;
            goto label_2c6e34;
        }
    }
    ctx->pc = 0x2C6E04u;
    // 0x2c6e04: 0x641021
    ctx->pc = 0x2c6e04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c6e08: 0x8c420004
    ctx->pc = 0x2c6e08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c6e0c: 0x3a0202d
    ctx->pc = 0x2c6e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e10: 0x8c450060
    ctx->pc = 0x2c6e10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c6e14: 0x8c460050
    ctx->pc = 0x2c6e14u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2c6e18: 0x24070024
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c6e1c: 0xc0be87c
    ctx->pc = 0x2C6E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C6E24u);
    ctx->pc = 0x2C6E20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 21), 27960));
    ctx->pc = 0x2FA1F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bsearch_0x2fa1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E24u; }
    }
    if (ctx->pc != 0x2C6E24u) { return; }
    ctx->pc = 0x2C6E24u;
    // 0x2c6e24: 0x40902d
    ctx->pc = 0x2c6e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e28: 0x5640000e
    ctx->pc = 0x2C6E28u;
    {
        const bool branch_taken_0x2c6e28 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6e28) {
            ctx->pc = 0x2C6E2Cu;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
            ctx->pc = 0x2C6E64u;
            goto label_2c6e64;
        }
    }
    ctx->pc = 0x2C6E30u;
    // 0x2c6e30: 0x26100001
    ctx->pc = 0x2c6e30u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2c6e34:
    // 0x2c6e34: 0x230102a
    ctx->pc = 0x2c6e34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x2c6e38: 0x5040ffed
    ctx->pc = 0x2C6E38u;
    {
        const bool branch_taken_0x2c6e38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c6e38) {
            ctx->pc = 0x2C6E3Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->pc = 0x2C6DF0u;
            goto label_2c6df0;
        }
    }
    ctx->pc = 0x2C6E40u;
label_2c6e40:
    // 0x2c6e40: 0x56400008
    ctx->pc = 0x2C6E40u;
    {
        const bool branch_taken_0x2c6e40 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6e40) {
            ctx->pc = 0x2C6E44u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
            ctx->pc = 0x2C6E64u;
            goto label_2c6e64;
        }
    }
    ctx->pc = 0x2C6E48u;
    // 0x2c6e48: 0x2402ffff
    ctx->pc = 0x2c6e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6e4c: 0x12c2000b
    ctx->pc = 0x2C6E4Cu;
    {
        const bool branch_taken_0x2c6e4c = (GPR_U32(ctx, 22) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C6E50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        if (branch_taken_0x2c6e4c) {
            ctx->pc = 0x2C6E7Cu;
            goto label_2c6e7c;
        }
    }
    ctx->pc = 0x2C6E54u;
    // 0x2c6e54: 0x56600001
    ctx->pc = 0x2C6E54u;
    {
        const bool branch_taken_0x2c6e54 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c6e54) {
            ctx->pc = 0x2C6E58u;
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2C6E5Cu;
            goto label_2c6e5c;
        }
    }
    ctx->pc = 0x2C6E5Cu;
label_2c6e5c:
    // 0x2c6e5c: 0x10000006
    ctx->pc = 0x2C6E5Cu;
    {
        const bool branch_taken_0x2c6e5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6E60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e5c) {
            ctx->pc = 0x2C6E78u;
            goto label_2c6e78;
        }
    }
    ctx->pc = 0x2C6E64u;
label_2c6e64:
    // 0x2c6e64: 0x101400
    ctx->pc = 0x2c6e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 16));
    // 0x2c6e68: 0x12600002
    ctx->pc = 0x2C6E68u;
    {
        const bool branch_taken_0x2c6e68 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6E6Cu;
        SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x2c6e68) {
            ctx->pc = 0x2C6E74u;
            goto label_2c6e74;
        }
    }
    ctx->pc = 0x2C6E70u;
    // 0x2c6e70: 0xae720000
    ctx->pc = 0x2c6e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_2c6e74:
    // 0x2c6e74: 0x60102d
    ctx->pc = 0x2c6e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e78:
    // 0x2c6e78: 0xdfbf00a0
    ctx->pc = 0x2c6e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c6e7c:
    // 0x2c6e7c: 0xdfb60090
    ctx->pc = 0x2c6e7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c6e80: 0xdfb50080
    ctx->pc = 0x2c6e80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6e84: 0xdfb40070
    ctx->pc = 0x2c6e84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6e88: 0xdfb30060
    ctx->pc = 0x2c6e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6e8c: 0xdfb20050
    ctx->pc = 0x2c6e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6e90: 0xdfb10040
    ctx->pc = 0x2c6e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6e94: 0xdfb00030
    ctx->pc = 0x2c6e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6e98: 0x3e00008
    ctx->pc = 0x2C6E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6E9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6DCCu: goto label_2c6dcc;
            case 0x2C6DDCu: goto label_2c6ddc;
            case 0x2C6DF0u: goto label_2c6df0;
            case 0x2C6E34u: goto label_2c6e34;
            case 0x2C6E40u: goto label_2c6e40;
            case 0x2C6E5Cu: goto label_2c6e5c;
            case 0x2C6E64u: goto label_2c6e64;
            case 0x2C6E74u: goto label_2c6e74;
            case 0x2C6E78u: goto label_2c6e78;
            case 0x2C6E7Cu: goto label_2c6e7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C6EA0u;
}
