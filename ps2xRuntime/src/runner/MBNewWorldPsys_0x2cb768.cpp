#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBNewWorldPsys
// Address: 0x2cb768 - 0x2cb814
void MBNewWorldPsys_0x2cb768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cb768u;

    // 0x2cb768: 0x27bdffa0
    ctx->pc = 0x2cb768u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cb76c: 0xffbf0050
    ctx->pc = 0x2cb76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cb770: 0xffb40040
    ctx->pc = 0x2cb770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2cb774: 0xffb30030
    ctx->pc = 0x2cb774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cb778: 0xffb20020
    ctx->pc = 0x2cb778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cb77c: 0xffb10010
    ctx->pc = 0x2cb77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cb780: 0xffb00000
    ctx->pc = 0x2cb780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb784: 0xc0982d
    ctx->pc = 0x2cb784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb788: 0x100882d
    ctx->pc = 0x2cb788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb78c: 0x120a02d
    ctx->pc = 0x2cb78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb790: 0xc0b27c2
    ctx->pc = 0x2CB790u;
    SET_GPR_U32(ctx, 31, 0x2CB798u);
    ctx->pc = 0x2CB794u;
    SET_GPR_U32(ctx, 6, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->pc = 0x2C9F08u;
    {
        const uint32_t __entryPc = ctx->pc;
        createPsysNode_0x2c9f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB798u; }
    }
    if (ctx->pc != 0x2CB798u) { return; }
    ctx->pc = 0x2CB798u;
    // 0x2cb798: 0x40902d
    ctx->pc = 0x2cb798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb79c: 0x12400015
    ctx->pc = 0x2CB79Cu;
    {
        const bool branch_taken_0x2cb79c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB7A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb79c) {
            ctx->pc = 0x2CB7F4u;
            goto label_2cb7f4;
        }
    }
    ctx->pc = 0x2CB7A4u;
    // 0x2cb7a4: 0x12200006
    ctx->pc = 0x2CB7A4u;
    {
        const bool branch_taken_0x2cb7a4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB7A8u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 112)));
        if (branch_taken_0x2cb7a4) {
            ctx->pc = 0x2CB7C0u;
            goto label_2cb7c0;
        }
    }
    ctx->pc = 0x2CB7ACu;
    // 0x2cb7ac: 0x82220000
    ctx->pc = 0x2cb7acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2cb7b0: 0x50400004
    ctx->pc = 0x2CB7B0u;
    {
        const bool branch_taken_0x2cb7b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cb7b0) {
            ctx->pc = 0x2CB7B4u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x2CB7C4u;
            goto label_2cb7c4;
        }
    }
    ctx->pc = 0x2CB7B8u;
    // 0x2cb7b8: 0x10000002
    ctx->pc = 0x2CB7B8u;
    {
        const bool branch_taken_0x2cb7b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB7BCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        if (branch_taken_0x2cb7b8) {
            ctx->pc = 0x2CB7C4u;
            goto label_2cb7c4;
        }
    }
    ctx->pc = 0x2CB7C0u;
label_2cb7c0:
    // 0x2cb7c0: 0xae000004
    ctx->pc = 0x2cb7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2cb7c4:
    // 0x2cb7c4: 0x12600005
    ctx->pc = 0x2CB7C4u;
    {
        const bool branch_taken_0x2cb7c4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB7C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7c4) {
            ctx->pc = 0x2CB7DCu;
            goto label_2cb7dc;
        }
    }
    ctx->pc = 0x2CB7CCu;
    // 0x2cb7cc: 0x200282d
    ctx->pc = 0x2cb7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d0: 0x260302d
    ctx->pc = 0x2cb7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d4: 0xc0b2acc
    ctx->pc = 0x2CB7D4u;
    SET_GPR_U32(ctx, 31, 0x2CB7DCu);
    ctx->pc = 0x2CB7D8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CAB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        setWorldParms_0x2cab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB7DCu; }
    }
    if (ctx->pc != 0x2CB7DCu) { return; }
    ctx->pc = 0x2CB7DCu;
label_2cb7dc:
    // 0x2cb7dc: 0x12200005
    ctx->pc = 0x2CB7DCu;
    {
        const bool branch_taken_0x2cb7dc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CB7E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cb7dc) {
            ctx->pc = 0x2CB7F4u;
            goto label_2cb7f4;
        }
    }
    ctx->pc = 0x2CB7E4u;
    // 0x2cb7e4: 0x9602002c
    ctx->pc = 0x2cb7e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2cb7e8: 0x34420002
    ctx->pc = 0x2cb7e8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
    // 0x2cb7ec: 0xa602002c
    ctx->pc = 0x2cb7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cb7f0: 0x240102d
    ctx->pc = 0x2cb7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cb7f4:
    // 0x2cb7f4: 0xdfbf0050
    ctx->pc = 0x2cb7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb7f8: 0xdfb40040
    ctx->pc = 0x2cb7f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb7fc: 0xdfb30030
    ctx->pc = 0x2cb7fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb800: 0xdfb20020
    ctx->pc = 0x2cb800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb804: 0xdfb10010
    ctx->pc = 0x2cb804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb808: 0xdfb00000
    ctx->pc = 0x2cb808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb80c: 0x3e00008
    ctx->pc = 0x2CB80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB810u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CB7C0u: goto label_2cb7c0;
            case 0x2CB7C4u: goto label_2cb7c4;
            case 0x2CB7DCu: goto label_2cb7dc;
            case 0x2CB7F4u: goto label_2cb7f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CB814u;
}
