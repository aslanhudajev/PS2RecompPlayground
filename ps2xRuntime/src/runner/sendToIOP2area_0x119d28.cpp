#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendToIOP2area
// Address: 0x119d28 - 0x119e84
void sendToIOP2area_0x119d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119d28u;

    // 0x119d28: 0x27bdff60
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x119d2c: 0xffb30030
    ctx->pc = 0x119d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119d30: 0xffb10010
    ctx->pc = 0x119d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119d34: 0xa0982d
    ctx->pc = 0x119d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d38: 0xffb00000
    ctx->pc = 0x119d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119d3c: 0x160882d
    ctx->pc = 0x119d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d40: 0xffb70070
    ctx->pc = 0x119d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x119d44: 0x120802d
    ctx->pc = 0x119d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d48: 0xffbe0080
    ctx->pc = 0x119d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x119d4c: 0x2671821
    ctx->pc = 0x119d4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x119d50: 0xffb60060
    ctx->pc = 0x119d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x119d54: 0x211b821
    ctx->pc = 0x119d54u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x119d58: 0xffb50050
    ctx->pc = 0x119d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x119d5c: 0xc0f02d
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d60: 0xffb40040
    ctx->pc = 0x119d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x119d64: 0x80a82d
    ctx->pc = 0x119d64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d68: 0xffbf0090
    ctx->pc = 0x119d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x119d6c: 0x100a02d
    ctx->pc = 0x119d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d70: 0xffb20020
    ctx->pc = 0x119d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119d74: 0x77102a
    ctx->pc = 0x119d74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 23)));
    // 0x119d78: 0x1040000b
    ctx->pc = 0x119D78u;
    {
        const bool branch_taken_0x119d78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x119D7Cu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119d78) {
            ctx->pc = 0x119DA8u;
            goto label_119da8;
        }
    }
    ctx->pc = 0x119D80u;
    // 0x119d80: 0x2e31823
    ctx->pc = 0x119d80u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x119d84: 0x71102a
    ctx->pc = 0x119d84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x119d88: 0x54400006
    ctx->pc = 0x119D88u;
    {
        const bool branch_taken_0x119d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x119d88) {
            ctx->pc = 0x119D8Cu;
            SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
            ctx->pc = 0x119DA4u;
            goto label_119da4;
        }
    }
    ctx->pc = 0x119D90u;
    // 0x119d90: 0x711023
    ctx->pc = 0x119d90u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119d94: 0x2028023
    ctx->pc = 0x119d94u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x119d98: 0x882d
    ctx->pc = 0x119d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d9c: 0x10000002
    ctx->pc = 0x119D9Cu;
    {
        const bool branch_taken_0x119d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119DA0u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119d9c) {
            ctx->pc = 0x119DA8u;
            goto label_119da8;
        }
    }
    ctx->pc = 0x119DA4u;
label_119da4:
    // 0x119da4: 0x211b821
    ctx->pc = 0x119da4u;
    SET_GPR_U32(ctx, 23, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_119da8:
    // 0x119da8: 0x213102a
    ctx->pc = 0x119da8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 19)));
    // 0x119dac: 0x14400010
    ctx->pc = 0x119DACu;
    {
        const bool branch_taken_0x119dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x119DB0u;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x119dac) {
            ctx->pc = 0x119DF0u;
            goto label_119df0;
        }
    }
    ctx->pc = 0x119DB4u;
    // 0x119db4: 0x2a0202d
    ctx->pc = 0x119db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119db8: 0x280282d
    ctx->pc = 0x119db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dbc: 0xc0467a2
    ctx->pc = 0x119DBCu;
    SET_GPR_U32(ctx, 31, 0x119DC4u);
    ctx->pc = 0x119DC0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DC4u; }
    }
    if (ctx->pc != 0x119DC4u) { return; }
    ctx->pc = 0x119DC4u;
    // 0x119dc4: 0x2932821
    ctx->pc = 0x119dc4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x119dc8: 0x3c0202d
    ctx->pc = 0x119dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dcc: 0xc0467a2
    ctx->pc = 0x119DCCu;
    SET_GPR_U32(ctx, 31, 0x119DD4u);
    ctx->pc = 0x119DD0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DD4u; }
    }
    if (ctx->pc != 0x119DD4u) { return; }
    ctx->pc = 0x119DD4u;
    // 0x119dd4: 0x3d02021
    ctx->pc = 0x119dd4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x119dd8: 0x2c0282d
    ctx->pc = 0x119dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ddc: 0x932023
    ctx->pc = 0x119ddcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x119de0: 0xc0467a2
    ctx->pc = 0x119DE0u;
    SET_GPR_U32(ctx, 31, 0x119DE8u);
    ctx->pc = 0x119DE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DE8u; }
    }
    if (ctx->pc != 0x119DE8u) { return; }
    ctx->pc = 0x119DE8u;
    // 0x119de8: 0x1000001a
    ctx->pc = 0x119DE8u;
    {
        const bool branch_taken_0x119de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119DECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119de8) {
            ctx->pc = 0x119E54u;
            goto label_119e54;
        }
    }
    ctx->pc = 0x119DF0u;
label_119df0:
    // 0x119df0: 0x232102a
    ctx->pc = 0x119df0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x119df4: 0x1440000f
    ctx->pc = 0x119DF4u;
    {
        const bool branch_taken_0x119df4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x119DF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119df4) {
            ctx->pc = 0x119E34u;
            goto label_119e34;
        }
    }
    ctx->pc = 0x119DFCu;
    // 0x119dfc: 0x2a0202d
    ctx->pc = 0x119dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e00: 0xc0467a2
    ctx->pc = 0x119E00u;
    SET_GPR_U32(ctx, 31, 0x119E08u);
    ctx->pc = 0x119E04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E08u; }
    }
    if (ctx->pc != 0x119E08u) { return; }
    ctx->pc = 0x119E08u;
    // 0x119e08: 0x2b02021
    ctx->pc = 0x119e08u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x119e0c: 0x2c0282d
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e10: 0xc0467a2
    ctx->pc = 0x119E10u;
    SET_GPR_U32(ctx, 31, 0x119E18u);
    ctx->pc = 0x119E14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E18u; }
    }
    if (ctx->pc != 0x119E18u) { return; }
    ctx->pc = 0x119E18u;
    // 0x119e18: 0x2d32821
    ctx->pc = 0x119e18u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x119e1c: 0x2323023
    ctx->pc = 0x119e1cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x119e20: 0xb02823
    ctx->pc = 0x119e20u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x119e24: 0xc0467a2
    ctx->pc = 0x119E24u;
    SET_GPR_U32(ctx, 31, 0x119E2Cu);
    ctx->pc = 0x119E28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E2Cu; }
    }
    if (ctx->pc != 0x119E2Cu) { return; }
    ctx->pc = 0x119E2Cu;
    // 0x119e2c: 0x10000009
    ctx->pc = 0x119E2Cu;
    {
        const bool branch_taken_0x119e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x119E30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x119e2c) {
            ctx->pc = 0x119E54u;
            goto label_119e54;
        }
    }
    ctx->pc = 0x119E34u;
label_119e34:
    // 0x119e34: 0x2a0202d
    ctx->pc = 0x119e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e38: 0xc0467a2
    ctx->pc = 0x119E38u;
    SET_GPR_U32(ctx, 31, 0x119E40u);
    ctx->pc = 0x119E3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E40u; }
    }
    if (ctx->pc != 0x119E40u) { return; }
    ctx->pc = 0x119E40u;
    // 0x119e40: 0x2b02021
    ctx->pc = 0x119e40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x119e44: 0x2c0282d
    ctx->pc = 0x119e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e48: 0xc0467a2
    ctx->pc = 0x119E48u;
    SET_GPR_U32(ctx, 31, 0x119E50u);
    ctx->pc = 0x119E4Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x119e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E50u; }
    }
    if (ctx->pc != 0x119E50u) { return; }
    ctx->pc = 0x119E50u;
    // 0x119e50: 0x2e0102d
    ctx->pc = 0x119e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_119e54:
    // 0x119e54: 0xdfbf0090
    ctx->pc = 0x119e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x119e58: 0xdfbe0080
    ctx->pc = 0x119e58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x119e5c: 0xdfb70070
    ctx->pc = 0x119e5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119e60: 0xdfb60060
    ctx->pc = 0x119e60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119e64: 0xdfb50050
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119e68: 0xdfb40040
    ctx->pc = 0x119e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119e6c: 0xdfb30030
    ctx->pc = 0x119e6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119e70: 0xdfb20020
    ctx->pc = 0x119e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119e74: 0xdfb10010
    ctx->pc = 0x119e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e78: 0xdfb00000
    ctx->pc = 0x119e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e7c: 0x3e00008
    ctx->pc = 0x119E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119DA4u: goto label_119da4;
            case 0x119DA8u: goto label_119da8;
            case 0x119DF0u: goto label_119df0;
            case 0x119E34u: goto label_119e34;
            case 0x119E54u: goto label_119e54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119E84u;
}
