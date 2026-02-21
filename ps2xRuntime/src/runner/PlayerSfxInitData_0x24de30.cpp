#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerSfxInitData
// Address: 0x24de30 - 0x24dee4
void PlayerSfxInitData_0x24de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24de30u;

    // 0x24de30: 0x27bdff90
    ctx->pc = 0x24de30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x24de34: 0xffbf0060
    ctx->pc = 0x24de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x24de38: 0xffb50050
    ctx->pc = 0x24de38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24de3c: 0xffb40040
    ctx->pc = 0x24de3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24de40: 0xffb30030
    ctx->pc = 0x24de40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24de44: 0xffb20020
    ctx->pc = 0x24de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24de48: 0xffb10010
    ctx->pc = 0x24de48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24de4c: 0xffb00000
    ctx->pc = 0x24de4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24de50: 0x80a82d
    ctx->pc = 0x24de50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de54: 0xa0902d
    ctx->pc = 0x24de54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de58: 0xc0882d
    ctx->pc = 0x24de58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de5c: 0xe0a02d
    ctx->pc = 0x24de5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24de60: 0x1a20000b
    ctx->pc = 0x24DE60u;
    {
        const bool branch_taken_0x24de60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24DE64u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24de60) {
            ctx->pc = 0x24DE90u;
            goto label_24de90;
        }
    }
    ctx->pc = 0x24DE68u;
    // 0x24de68: 0x24040050
    ctx->pc = 0x24de68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 80));
    // 0x24de6c: 0x2403ffff
    ctx->pc = 0x24de6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_24de70:
    // 0x24de70: 0x2042818
    ctx->pc = 0x24de70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24de74: 0xb21021
    ctx->pc = 0x24de74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x24de78: 0xac430008
    ctx->pc = 0x24de78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x24de7c: 0xac43000c
    ctx->pc = 0x24de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x24de80: 0x26100001
    ctx->pc = 0x24de80u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x24de84: 0x211102a
    ctx->pc = 0x24de84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x24de88: 0x1440fff9
    ctx->pc = 0x24DE88u;
    {
        const bool branch_taken_0x24de88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24de88) {
            ctx->pc = 0x24DE70u;
            goto label_24de70;
        }
    }
    ctx->pc = 0x24DE90u;
label_24de90:
    // 0x24de90: 0x1a20000b
    ctx->pc = 0x24DE90u;
    {
        const bool branch_taken_0x24de90 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24DE94u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24de90) {
            ctx->pc = 0x24DEC0u;
            goto label_24dec0;
        }
    }
    ctx->pc = 0x24DE98u;
    // 0x24de98: 0x24130050
    ctx->pc = 0x24de98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 80));
    // 0x24de9c: 0x2a0202d
    ctx->pc = 0x24de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24dea0:
    // 0x24dea0: 0x2131018
    ctx->pc = 0x24dea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24dea4: 0x522821
    ctx->pc = 0x24dea4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24dea8: 0xc093724
    ctx->pc = 0x24DEA8u;
    SET_GPR_U32(ctx, 31, 0x24DEB0u);
    ctx->pc = 0x24DEACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSfxInit_0x24dc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DEB0u; }
    }
    if (ctx->pc != 0x24DEB0u) { return; }
    ctx->pc = 0x24DEB0u;
    // 0x24deb0: 0x26100001
    ctx->pc = 0x24deb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x24deb4: 0x211102a
    ctx->pc = 0x24deb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x24deb8: 0x1440fff9
    ctx->pc = 0x24DEB8u;
    {
        const bool branch_taken_0x24deb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24DEBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24deb8) {
            ctx->pc = 0x24DEA0u;
            goto label_24dea0;
        }
    }
    ctx->pc = 0x24DEC0u;
label_24dec0:
    // 0x24dec0: 0xdfbf0060
    ctx->pc = 0x24dec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24dec4: 0xdfb50050
    ctx->pc = 0x24dec4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24dec8: 0xdfb40040
    ctx->pc = 0x24dec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24decc: 0xdfb30030
    ctx->pc = 0x24deccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ded0: 0xdfb20020
    ctx->pc = 0x24ded0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ded4: 0xdfb10010
    ctx->pc = 0x24ded4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ded8: 0xdfb00000
    ctx->pc = 0x24ded8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dedc: 0x3e00008
    ctx->pc = 0x24DEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DEE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DE70u: goto label_24de70;
            case 0x24DE90u: goto label_24de90;
            case 0x24DEA0u: goto label_24dea0;
            case 0x24DEC0u: goto label_24dec0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DEE4u;
}
