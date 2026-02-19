#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sendToIOP2area
// Address: 0x2defa8 - 0x2df0fc
void sendToIOP2area_0x2defa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2defa8u;

    // 0x2defa8: 0x27bdff60
    ctx->pc = 0x2defa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2defac: 0xffbf0090
    ctx->pc = 0x2defacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2defb0: 0xffbe0080
    ctx->pc = 0x2defb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2defb4: 0xffb70070
    ctx->pc = 0x2defb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2defb8: 0xffb60060
    ctx->pc = 0x2defb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2defbc: 0xffb50050
    ctx->pc = 0x2defbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2defc0: 0xffb40040
    ctx->pc = 0x2defc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2defc4: 0xffb30030
    ctx->pc = 0x2defc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2defc8: 0xffb20020
    ctx->pc = 0x2defc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2defcc: 0xffb10010
    ctx->pc = 0x2defccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2defd0: 0xffb00000
    ctx->pc = 0x2defd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2defd4: 0x80b02d
    ctx->pc = 0x2defd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defd8: 0xa0902d
    ctx->pc = 0x2defd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defdc: 0xc0f02d
    ctx->pc = 0x2defdcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defe0: 0x100a82d
    ctx->pc = 0x2defe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defe4: 0x120802d
    ctx->pc = 0x2defe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defe8: 0x140b82d
    ctx->pc = 0x2defe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defec: 0x160882d
    ctx->pc = 0x2defecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2deff0: 0x2111821
    ctx->pc = 0x2deff0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2deff4: 0x2473821
    ctx->pc = 0x2deff4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2deff8: 0x671823
    ctx->pc = 0x2deff8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2deffc: 0x18600007
    ctx->pc = 0x2DEFFCu;
    {
        const bool branch_taken_0x2deffc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2DF000u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2deffc) {
            ctx->pc = 0x2DF01Cu;
            goto label_2df01c;
        }
    }
    ctx->pc = 0x2DF004u;
    // 0x2df004: 0x71102a
    ctx->pc = 0x2df004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x2df008: 0x54400004
    ctx->pc = 0x2DF008u;
    {
        const bool branch_taken_0x2df008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df008) {
            ctx->pc = 0x2DF00Cu;
            SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
            ctx->pc = 0x2DF01Cu;
            goto label_2df01c;
        }
    }
    ctx->pc = 0x2DF010u;
    // 0x2df010: 0x711023
    ctx->pc = 0x2df010u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2df014: 0x2028023
    ctx->pc = 0x2df014u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2df018: 0x882d
    ctx->pc = 0x2df018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df01c:
    // 0x2df01c: 0x212102a
    ctx->pc = 0x2df01cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x2df020: 0x1440000e
    ctx->pc = 0x2DF020u;
    {
        const bool branch_taken_0x2df020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF024u;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x2df020) {
            ctx->pc = 0x2DF05Cu;
            goto label_2df05c;
        }
    }
    ctx->pc = 0x2DF028u;
    // 0x2df028: 0x2c0202d
    ctx->pc = 0x2df028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df02c: 0x2a0282d
    ctx->pc = 0x2df02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df030: 0xc0b7c40
    ctx->pc = 0x2DF030u;
    SET_GPR_U32(ctx, 31, 0x2DF038u);
    ctx->pc = 0x2DF034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF038u; }
    }
    if (ctx->pc != 0x2DF038u) { return; }
    ctx->pc = 0x2DF038u;
    // 0x2df038: 0x2629821
    ctx->pc = 0x2df038u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df03c: 0x3c0202d
    ctx->pc = 0x2df03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df040: 0x2b22821
    ctx->pc = 0x2df040u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2df044: 0xc0b7c40
    ctx->pc = 0x2DF044u;
    SET_GPR_U32(ctx, 31, 0x2DF04Cu);
    ctx->pc = 0x2DF048u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF04Cu; }
    }
    if (ctx->pc != 0x2DF04Cu) { return; }
    ctx->pc = 0x2DF04Cu;
    // 0x2df04c: 0x2629821
    ctx->pc = 0x2df04cu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df050: 0x3d02021
    ctx->pc = 0x2df050u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
    // 0x2df054: 0x10000017
    ctx->pc = 0x2DF054u;
    {
        const bool branch_taken_0x2df054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF058u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        if (branch_taken_0x2df054) {
            ctx->pc = 0x2DF0B4u;
            goto label_2df0b4;
        }
    }
    ctx->pc = 0x2DF05Cu;
label_2df05c:
    // 0x2df05c: 0x234102a
    ctx->pc = 0x2df05cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x2df060: 0x1440000f
    ctx->pc = 0x2DF060u;
    {
        const bool branch_taken_0x2df060 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2DF064u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2df060) {
            ctx->pc = 0x2DF0A0u;
            goto label_2df0a0;
        }
    }
    ctx->pc = 0x2DF068u;
    // 0x2df068: 0x2a0282d
    ctx->pc = 0x2df068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df06c: 0xc0b7c40
    ctx->pc = 0x2DF06Cu;
    SET_GPR_U32(ctx, 31, 0x2DF074u);
    ctx->pc = 0x2DF070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF074u; }
    }
    if (ctx->pc != 0x2DF074u) { return; }
    ctx->pc = 0x2DF074u;
    // 0x2df074: 0x2629821
    ctx->pc = 0x2df074u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df078: 0x2d02021
    ctx->pc = 0x2df078u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x2df07c: 0x2e0282d
    ctx->pc = 0x2df07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df080: 0xc0b7c40
    ctx->pc = 0x2DF080u;
    SET_GPR_U32(ctx, 31, 0x2DF088u);
    ctx->pc = 0x2DF084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF088u; }
    }
    if (ctx->pc != 0x2DF088u) { return; }
    ctx->pc = 0x2DF088u;
    // 0x2df088: 0x2629821
    ctx->pc = 0x2df088u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df08c: 0x2f22821
    ctx->pc = 0x2df08cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x2df090: 0x3c0202d
    ctx->pc = 0x2df090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df094: 0xb02823
    ctx->pc = 0x2df094u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2df098: 0x10000008
    ctx->pc = 0x2DF098u;
    {
        const bool branch_taken_0x2df098 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DF09Cu;
        SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
        if (branch_taken_0x2df098) {
            ctx->pc = 0x2DF0BCu;
            goto label_2df0bc;
        }
    }
    ctx->pc = 0x2DF0A0u;
label_2df0a0:
    // 0x2df0a0: 0x2a0282d
    ctx->pc = 0x2df0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0a4: 0xc0b7c40
    ctx->pc = 0x2DF0A4u;
    SET_GPR_U32(ctx, 31, 0x2DF0ACu);
    ctx->pc = 0x2DF0A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0ACu; }
    }
    if (ctx->pc != 0x2DF0ACu) { return; }
    ctx->pc = 0x2DF0ACu;
    // 0x2df0ac: 0x2629821
    ctx->pc = 0x2df0acu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df0b0: 0x2d02021
    ctx->pc = 0x2df0b0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2df0b4:
    // 0x2df0b4: 0x2e0282d
    ctx->pc = 0x2df0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0b8: 0x220302d
    ctx->pc = 0x2df0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2df0bc:
    // 0x2df0bc: 0xc0b7c40
    ctx->pc = 0x2DF0BCu;
    SET_GPR_U32(ctx, 31, 0x2DF0C4u);
    ctx->pc = 0x2DF100u;
    {
        const uint32_t __entryPc = ctx->pc;
        sendToIOP_0x2df100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF0C4u; }
    }
    if (ctx->pc != 0x2DF0C4u) { return; }
    ctx->pc = 0x2DF0C4u;
    // 0x2df0c4: 0x2629821
    ctx->pc = 0x2df0c4u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2df0c8: 0x260102d
    ctx->pc = 0x2df0c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df0cc: 0xdfbf0090
    ctx->pc = 0x2df0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2df0d0: 0xdfbe0080
    ctx->pc = 0x2df0d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2df0d4: 0xdfb70070
    ctx->pc = 0x2df0d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2df0d8: 0xdfb60060
    ctx->pc = 0x2df0d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2df0dc: 0xdfb50050
    ctx->pc = 0x2df0dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2df0e0: 0xdfb40040
    ctx->pc = 0x2df0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df0e4: 0xdfb30030
    ctx->pc = 0x2df0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df0e8: 0xdfb20020
    ctx->pc = 0x2df0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df0ec: 0xdfb10010
    ctx->pc = 0x2df0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df0f0: 0xdfb00000
    ctx->pc = 0x2df0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df0f4: 0x3e00008
    ctx->pc = 0x2DF0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF0F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF01Cu: goto label_2df01c;
            case 0x2DF05Cu: goto label_2df05c;
            case 0x2DF0A0u: goto label_2df0a0;
            case 0x2DF0B4u: goto label_2df0b4;
            case 0x2DF0BCu: goto label_2df0bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF0FCu;
}
