#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkipFrame
// Address: 0x11fae0 - 0x11fc04
void _decodeOrSkipFrame_0x11fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fae0u;

    // 0x11fae0: 0x27bdffa0
    ctx->pc = 0x11fae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11fae4: 0x2402ffff
    ctx->pc = 0x11fae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fae8: 0xffb40040
    ctx->pc = 0x11fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11faec: 0xffb10010
    ctx->pc = 0x11faecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11faf0: 0xa02d
    ctx->pc = 0x11faf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11faf4: 0xffbf0050
    ctx->pc = 0x11faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11faf8: 0x80882d
    ctx->pc = 0x11faf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fafc: 0xffb30030
    ctx->pc = 0x11fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11fb00: 0xffb20020
    ctx->pc = 0x11fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11fb04: 0xffb00000
    ctx->pc = 0x11fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fb08: 0x10c20004
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x11FB0Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB1Cu;
            goto label_11fb1c;
        }
    }
    ctx->pc = 0x11FB10u;
    // 0x11fb10: 0xa6102a
    ctx->pc = 0x11fb10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x11fb14: 0x10400013
    ctx->pc = 0x11FB14u;
    {
        const bool branch_taken_0x11fb14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fb14) {
            ctx->pc = 0x11FB64u;
            goto label_11fb64;
        }
    }
    ctx->pc = 0x11FB1Cu;
label_11fb1c:
    // 0x11fb1c: 0x8e020008
    ctx->pc = 0x11fb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11fb20: 0x14400003
    ctx->pc = 0x11FB20u;
    {
        const bool branch_taken_0x11fb20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FB24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x11fb20) {
            ctx->pc = 0x11FB30u;
            goto label_11fb30;
        }
    }
    ctx->pc = 0x11FB28u;
    // 0x11fb28: 0xae200008
    ctx->pc = 0x11fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x11fb2c: 0xae020008
    ctx->pc = 0x11fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_11fb30:
    // 0x11fb30: 0xc04931c
    ctx->pc = 0x11FB30u;
    SET_GPR_U32(ctx, 31, 0x11FB38u);
    ctx->pc = 0x11FB34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x124C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB38u; }
    }
    if (ctx->pc != 0x11FB38u) { return; }
    ctx->pc = 0x11FB38u;
    // 0x11fb38: 0x10400007
    ctx->pc = 0x11FB38u;
    {
        const bool branch_taken_0x11fb38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB3Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fb38) {
            ctx->pc = 0x11FB58u;
            goto label_11fb58;
        }
    }
    ctx->pc = 0x11FB40u;
    // 0x11fb40: 0x3c130017
    ctx->pc = 0x11fb40u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x11fb44: 0x8e050004
    ctx->pc = 0x11fb44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fb48: 0xc0492b6
    ctx->pc = 0x11FB48u;
    SET_GPR_U32(ctx, 31, 0x11FB50u);
    ctx->pc = 0x11FB4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 6404)));
    ctx->pc = 0x124AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x124ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB50u; }
    }
    if (ctx->pc != 0x11FB50u) { return; }
    ctx->pc = 0x11FB50u;
    // 0x11fb50: 0x10000002
    ctx->pc = 0x11FB50u;
    {
        const bool branch_taken_0x11fb50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB54u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x11fb50) {
            ctx->pc = 0x11FB5Cu;
            goto label_11fb5c;
        }
    }
    ctx->pc = 0x11FB58u;
label_11fb58:
    // 0x11fb58: 0x3c130017
    ctx->pc = 0x11fb58u;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
label_11fb5c:
    // 0x11fb5c: 0x10000007
    ctx->pc = 0x11FB5Cu;
    {
        const bool branch_taken_0x11fb5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FB60u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fb5c) {
            ctx->pc = 0x11FB7Cu;
            goto label_11fb7c;
        }
    }
    ctx->pc = 0x11FB64u;
label_11fb64:
    // 0x11fb64: 0xc04931c
    ctx->pc = 0x11FB64u;
    SET_GPR_U32(ctx, 31, 0x11FB6Cu);
    ctx->pc = 0x11FB68u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x124C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x124c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB6Cu; }
    }
    if (ctx->pc != 0x11FB6Cu) { return; }
    ctx->pc = 0x11FB6Cu;
    // 0x11fb6c: 0x3c130017
    ctx->pc = 0x11fb6cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)23 << 16));
    // 0x11fb70: 0x40902d
    ctx->pc = 0x11fb70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb74: 0xc047df4
    ctx->pc = 0x11FB74u;
    SET_GPR_U32(ctx, 31, 0x11FB7Cu);
    ctx->pc = 0x11FB78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11F7D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x11f7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB7Cu; }
    }
    if (ctx->pc != 0x11FB7Cu) { return; }
    ctx->pc = 0x11FB7Cu;
label_11fb7c:
    // 0x11fb7c: 0x8e641904
    ctx->pc = 0x11fb7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 6404)));
    // 0x11fb80: 0xc0492ee
    ctx->pc = 0x11FB80u;
    SET_GPR_U32(ctx, 31, 0x11FB88u);
    ctx->pc = 0x11FB84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x124BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x124bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FB88u; }
    }
    if (ctx->pc != 0x11FB88u) { return; }
    ctx->pc = 0x11FB88u;
    // 0x11fb88: 0x3c020017
    ctx->pc = 0x11fb88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11fb8c: 0x24040003
    ctx->pc = 0x11fb8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fb90: 0x8c4319ac
    ctx->pc = 0x11fb90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fb94: 0x10640007
    ctx->pc = 0x11FB94u;
    {
        const bool branch_taken_0x11fb94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x11FB98u;
        SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x11fb94) {
            ctx->pc = 0x11FBB4u;
            goto label_11fbb4;
        }
    }
    ctx->pc = 0x11FB9Cu;
    // 0x11fb9c: 0x16800006
    ctx->pc = 0x11FB9Cu;
    {
        const bool branch_taken_0x11fb9c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FBA0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 6404)));
        if (branch_taken_0x11fb9c) {
            ctx->pc = 0x11FBB8u;
            goto label_11fbb8;
        }
    }
    ctx->pc = 0x11FBA4u;
    // 0x11fba4: 0x3c030017
    ctx->pc = 0x11fba4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x11fba8: 0x8c62191c
    ctx->pc = 0x11fba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6428)));
    // 0x11fbac: 0x2c420001
    ctx->pc = 0x11fbacu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x11fbb0: 0xac62191c
    ctx->pc = 0x11fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6428), GPR_U32(ctx, 2));
label_11fbb4:
    // 0x11fbb4: 0x8e641904
    ctx->pc = 0x11fbb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 6404)));
label_11fbb8:
    // 0x11fbb8: 0x8e0200ac
    ctx->pc = 0x11fbb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x11fbbc: 0x8c63191c
    ctx->pc = 0x11fbbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 6428)));
    // 0x11fbc0: 0x821023
    ctx->pc = 0x11fbc0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11fbc4: 0x14600006
    ctx->pc = 0x11FBC4u;
    {
        const bool branch_taken_0x11fbc4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x11FBC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x11fbc4) {
            ctx->pc = 0x11FBE0u;
            goto label_11fbe0;
        }
    }
    ctx->pc = 0x11FBCCu;
    // 0x11fbcc: 0x8e020004
    ctx->pc = 0x11fbccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11fbd0: 0x24830001
    ctx->pc = 0x11fbd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x11fbd4: 0xae631904
    ctx->pc = 0x11fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6404), GPR_U32(ctx, 3));
    // 0x11fbd8: 0x24420001
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fbdc: 0xae020004
    ctx->pc = 0x11fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_11fbe0:
    // 0x11fbe0: 0x240102d
    ctx->pc = 0x11fbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbe4: 0xdfbf0050
    ctx->pc = 0x11fbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11fbe8: 0xdfb40040
    ctx->pc = 0x11fbe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fbec: 0xdfb30030
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fbf0: 0xdfb20020
    ctx->pc = 0x11fbf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fbf4: 0xdfb10010
    ctx->pc = 0x11fbf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fbf8: 0xdfb00000
    ctx->pc = 0x11fbf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fbfc: 0x3e00008
    ctx->pc = 0x11FBFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FB1Cu: goto label_11fb1c;
            case 0x11FB30u: goto label_11fb30;
            case 0x11FB58u: goto label_11fb58;
            case 0x11FB5Cu: goto label_11fb5c;
            case 0x11FB64u: goto label_11fb64;
            case 0x11FB7Cu: goto label_11fb7c;
            case 0x11FBB4u: goto label_11fbb4;
            case 0x11FBB8u: goto label_11fbb8;
            case 0x11FBE0u: goto label_11fbe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FC04u;
}
