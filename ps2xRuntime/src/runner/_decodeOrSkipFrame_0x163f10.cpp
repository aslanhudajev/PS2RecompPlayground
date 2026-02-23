#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _decodeOrSkipFrame
// Address: 0x163f10 - 0x164034
void _decodeOrSkipFrame_0x163f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_decodeOrSkipFrame");


    ctx->pc = 0x163f10u;

    // 0x163f10: 0x27bdffa0
    ctx->pc = 0x163f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163f14: 0x2402ffff
    ctx->pc = 0x163f14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x163f18: 0xffb40040
    ctx->pc = 0x163f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x163f1c: 0xffb10010
    ctx->pc = 0x163f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x163f20: 0xa02d
    ctx->pc = 0x163f20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f24: 0xffbf0050
    ctx->pc = 0x163f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x163f28: 0x80882d
    ctx->pc = 0x163f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163f2c: 0xffb30030
    ctx->pc = 0x163f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x163f30: 0xffb20020
    ctx->pc = 0x163f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x163f34: 0xffb00000
    ctx->pc = 0x163f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x163f38: 0x10c20004
    ctx->pc = 0x163F38u;
    {
        const bool branch_taken_0x163f38 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 2));
        ctx->pc = 0x163F3Cu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 64)));
        if (branch_taken_0x163f38) {
            ctx->pc = 0x163F4Cu;
            goto label_163f4c;
        }
    }
    ctx->pc = 0x163F40u;
    // 0x163f40: 0xa6102a
    ctx->pc = 0x163f40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x163f44: 0x10400013
    ctx->pc = 0x163F44u;
    {
        const bool branch_taken_0x163f44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163F48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163f44) {
            ctx->pc = 0x163F94u;
            goto label_163f94;
        }
    }
    ctx->pc = 0x163F4Cu;
label_163f4c:
    // 0x163f4c: 0x8e020008
    ctx->pc = 0x163f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x163f50: 0x14400003
    ctx->pc = 0x163F50u;
    {
        const bool branch_taken_0x163f50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x163F54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x163f50) {
            ctx->pc = 0x163F60u;
            goto label_163f60;
        }
    }
    ctx->pc = 0x163F58u;
    // 0x163f58: 0xae200008
    ctx->pc = 0x163f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x163f5c: 0xae020008
    ctx->pc = 0x163f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_163f60:
    // 0x163f60: 0xc058914
    ctx->pc = 0x163F60u;
    SET_GPR_U32(ctx, 31, 0x163F68u);
    ctx->pc = 0x163F64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x162450u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x162450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F68u; }
        else if (ctx->pc != 0x163F68u) { ctx->pc = 0x163F68u; }
    }
    if (ctx->pc != 0x163F68u) { return; }
    ctx->pc = 0x163F68u;
    // 0x163f68: 0x10400007
    ctx->pc = 0x163F68u;
    {
        const bool branch_taken_0x163f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x163F6Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163f68) {
            ctx->pc = 0x163F88u;
            goto label_163f88;
        }
    }
    ctx->pc = 0x163F70u;
    // 0x163f70: 0x3c130023
    ctx->pc = 0x163f70u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x163f74: 0x8e050004
    ctx->pc = 0x163f74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x163f78: 0xc0588ae
    ctx->pc = 0x163F78u;
    SET_GPR_U32(ctx, 31, 0x163F80u);
    ctx->pc = 0x163F7Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294943556)));
    ctx->pc = 0x1622B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x1622b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F80u; }
        else if (ctx->pc != 0x163F80u) { ctx->pc = 0x163F80u; }
    }
    if (ctx->pc != 0x163F80u) { return; }
    ctx->pc = 0x163F80u;
    // 0x163f80: 0x10000002
    ctx->pc = 0x163F80u;
    {
        const bool branch_taken_0x163f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163F84u;
        SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        if (branch_taken_0x163f80) {
            ctx->pc = 0x163F8Cu;
            goto label_163f8c;
        }
    }
    ctx->pc = 0x163F88u;
label_163f88:
    // 0x163f88: 0x3c130023
    ctx->pc = 0x163f88u;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
label_163f8c:
    // 0x163f8c: 0x10000007
    ctx->pc = 0x163F8Cu;
    {
        const bool branch_taken_0x163f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x163F90u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x163f8c) {
            ctx->pc = 0x163FACu;
            goto label_163fac;
        }
    }
    ctx->pc = 0x163F94u;
label_163f94:
    // 0x163f94: 0xc058914
    ctx->pc = 0x163F94u;
    SET_GPR_U32(ctx, 31, 0x163F9Cu);
    ctx->pc = 0x163F98u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x162450u;
    {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x162450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163F9Cu; }
        else if (ctx->pc != 0x163F9Cu) { ctx->pc = 0x163F9Cu; }
    }
    if (ctx->pc != 0x163F9Cu) { return; }
    ctx->pc = 0x163F9Cu;
    // 0x163f9c: 0x3c130023
    ctx->pc = 0x163f9cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x163fa0: 0x40902d
    ctx->pc = 0x163fa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163fa4: 0xc058f00
    ctx->pc = 0x163FA4u;
    SET_GPR_U32(ctx, 31, 0x163FACu);
    ctx->pc = 0x163FA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x163C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x163c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FACu; }
        else if (ctx->pc != 0x163FACu) { ctx->pc = 0x163FACu; }
    }
    if (ctx->pc != 0x163FACu) { return; }
    ctx->pc = 0x163FACu;
label_163fac:
    // 0x163fac: 0x8e64a344
    ctx->pc = 0x163facu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294943556)));
    // 0x163fb0: 0xc0588e6
    ctx->pc = 0x163FB0u;
    SET_GPR_U32(ctx, 31, 0x163FB8u);
    ctx->pc = 0x163FB4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x162398u;
    {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x162398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163FB8u; }
        else if (ctx->pc != 0x163FB8u) { ctx->pc = 0x163FB8u; }
    }
    if (ctx->pc != 0x163FB8u) { return; }
    ctx->pc = 0x163FB8u;
    // 0x163fb8: 0x3c020023
    ctx->pc = 0x163fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x163fbc: 0x24040003
    ctx->pc = 0x163fbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x163fc0: 0x8c43a3ec
    ctx->pc = 0x163fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x163fc4: 0x10640007
    ctx->pc = 0x163FC4u;
    {
        const bool branch_taken_0x163fc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x163FC8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x163fc4) {
            ctx->pc = 0x163FE4u;
            goto label_163fe4;
        }
    }
    ctx->pc = 0x163FCCu;
    // 0x163fcc: 0x16800006
    ctx->pc = 0x163FCCu;
    {
        const bool branch_taken_0x163fcc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x163FD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294943556)));
        if (branch_taken_0x163fcc) {
            ctx->pc = 0x163FE8u;
            goto label_163fe8;
        }
    }
    ctx->pc = 0x163FD4u;
    // 0x163fd4: 0x3c030023
    ctx->pc = 0x163fd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x163fd8: 0x8c62a35c
    ctx->pc = 0x163fd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943580)));
    // 0x163fdc: 0x2c420001
    ctx->pc = 0x163fdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x163fe0: 0xac62a35c
    ctx->pc = 0x163fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943580), GPR_U32(ctx, 2));
label_163fe4:
    // 0x163fe4: 0x8e64a344
    ctx->pc = 0x163fe4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4294943556)));
label_163fe8:
    // 0x163fe8: 0x8e0200ac
    ctx->pc = 0x163fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x163fec: 0x8c63a35c
    ctx->pc = 0x163fecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294943580)));
    // 0x163ff0: 0x821023
    ctx->pc = 0x163ff0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x163ff4: 0x14600006
    ctx->pc = 0x163FF4u;
    {
        const bool branch_taken_0x163ff4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x163FF8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x163ff4) {
            ctx->pc = 0x164010u;
            goto label_164010;
        }
    }
    ctx->pc = 0x163FFCu;
    // 0x163ffc: 0x8e020004
    ctx->pc = 0x163ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x164000: 0x24830001
    ctx->pc = 0x164000u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x164004: 0xae63a344
    ctx->pc = 0x164004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943556), GPR_U32(ctx, 3));
    // 0x164008: 0x24420001
    ctx->pc = 0x164008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16400c: 0xae020004
    ctx->pc = 0x16400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_164010:
    // 0x164010: 0x240102d
    ctx->pc = 0x164010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164014: 0xdfbf0050
    ctx->pc = 0x164014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164018: 0xdfb40040
    ctx->pc = 0x164018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16401c: 0xdfb30030
    ctx->pc = 0x16401cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164020: 0xdfb20020
    ctx->pc = 0x164020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164024: 0xdfb10010
    ctx->pc = 0x164024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164028: 0xdfb00000
    ctx->pc = 0x164028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16402c: 0x3e00008
    ctx->pc = 0x16402Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164030u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163F4Cu: goto label_163f4c;
            case 0x163F60u: goto label_163f60;
            case 0x163F88u: goto label_163f88;
            case 0x163F8Cu: goto label_163f8c;
            case 0x163F94u: goto label_163f94;
            case 0x163FACu: goto label_163fac;
            case 0x163FE4u: goto label_163fe4;
            case 0x163FE8u: goto label_163fe8;
            case 0x164010u: goto label_164010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x164034u;
}
