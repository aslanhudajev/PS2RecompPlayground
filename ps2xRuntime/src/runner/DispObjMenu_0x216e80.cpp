#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispObjMenu
// Address: 0x216e80 - 0x217014
void DispObjMenu_0x216e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216e80u;

    // 0x216e80: 0x27bdff60
    ctx->pc = 0x216e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x216e84: 0xffbf0090
    ctx->pc = 0x216e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x216e88: 0xffbe0080
    ctx->pc = 0x216e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x216e8c: 0xffb70070
    ctx->pc = 0x216e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x216e90: 0xffb60060
    ctx->pc = 0x216e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x216e94: 0xffb50050
    ctx->pc = 0x216e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x216e98: 0xffb40040
    ctx->pc = 0x216e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x216e9c: 0xffb30030
    ctx->pc = 0x216e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x216ea0: 0xffb20020
    ctx->pc = 0x216ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x216ea4: 0xffb10010
    ctx->pc = 0x216ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x216ea8: 0xffb00000
    ctx->pc = 0x216ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216eac: 0x80982d
    ctx->pc = 0x216eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216eb0: 0x24160001
    ctx->pc = 0x216eb0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x216eb4: 0x24140003
    ctx->pc = 0x216eb4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    // 0x216eb8: 0x8e63004c
    ctx->pc = 0x216eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x216ebc: 0x2c620026
    ctx->pc = 0x216ebcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 38));
    // 0x216ec0: 0x10400004
    ctx->pc = 0x216EC0u;
    {
        const bool branch_taken_0x216ec0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216EC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x216ec0) {
            ctx->pc = 0x216ED4u;
            goto label_216ed4;
        }
    }
    ctx->pc = 0x216EC8u;
    // 0x216ec8: 0x102d
    ctx->pc = 0x216ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ecc: 0x10000011
    ctx->pc = 0x216ECCu;
    {
        const bool branch_taken_0x216ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216ED0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x216ecc) {
            ctx->pc = 0x216F14u;
            goto label_216f14;
        }
    }
    ctx->pc = 0x216ED4u;
label_216ed4:
    // 0x216ed4: 0x3c03003c
    ctx->pc = 0x216ed4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216ed8: 0x2463cf50
    ctx->pc = 0x216ed8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x216edc: 0x3c020032
    ctx->pc = 0x216edcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x216ee0: 0x8c42f8d0
    ctx->pc = 0x216ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
    // 0x216ee4: 0x21080
    ctx->pc = 0x216ee4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x216ee8: 0x431021
    ctx->pc = 0x216ee8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216eec: 0x41842
    ctx->pc = 0x216eecu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 1));
    // 0x216ef0: 0x8c420000
    ctx->pc = 0x216ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216ef4: 0x629021
    ctx->pc = 0x216ef4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216ef8: 0x244102a
    ctx->pc = 0x216ef8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 4)));
    // 0x216efc: 0x82900b
    ctx->pc = 0x216efcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
    // 0x216f00: 0x8e63004c
    ctx->pc = 0x216f00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x216f04: 0x243102b
    ctx->pc = 0x216f04u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x216f08: 0x50400001
    ctx->pc = 0x216F08u;
    {
        const bool branch_taken_0x216f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x216f08) {
            ctx->pc = 0x216F0Cu;
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x216F10u;
            goto label_216f10;
        }
    }
    ctx->pc = 0x216F10u;
label_216f10:
    // 0x216f10: 0x2441023
    ctx->pc = 0x216f10u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_216f14:
    // 0x216f14: 0x40882d
    ctx->pc = 0x216f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f18: 0x232102a
    ctx->pc = 0x216f18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x216f1c: 0x10400031
    ctx->pc = 0x216F1Cu;
    {
        const bool branch_taken_0x216f1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216F20u;
        SET_GPR_U32(ctx, 30, ((uint32_t)50 << 16));
        if (branch_taken_0x216f1c) {
            ctx->pc = 0x216FE4u;
            goto label_216fe4;
        }
    }
    ctx->pc = 0x216F24u;
    // 0x216f24: 0x24150018
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 24));
    // 0x216f28: 0x3c17003c
    ctx->pc = 0x216f28u;
    SET_GPR_U32(ctx, 23, ((uint32_t)60 << 16));
    // 0x216f2c: 0x8fc2f8d0
    ctx->pc = 0x216f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294965456)));
label_216f30:
    // 0x216f30: 0x21080
    ctx->pc = 0x216f30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x216f34: 0x3c03003c
    ctx->pc = 0x216f34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x216f38: 0x2463cf50
    ctx->pc = 0x216f38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954832));
    // 0x216f3c: 0x431021
    ctx->pc = 0x216f3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216f40: 0x8c420000
    ctx->pc = 0x216f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216f44: 0x1622001b
    ctx->pc = 0x216F44u;
    {
        const bool branch_taken_0x216f44 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x216F48u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x216f44) {
            ctx->pc = 0x216FB4u;
            goto label_216fb4;
        }
    }
    ctx->pc = 0x216F4Cu;
    // 0x216f4c: 0x2358018
    ctx->pc = 0x216f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x216f50: 0x8e67005c
    ctx->pc = 0x216f50u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x216f54: 0x3c0400ff
    ctx->pc = 0x216f54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x216f58: 0x3484ff00
    ctx->pc = 0x216f58u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x216f5c: 0x2c0282d
    ctx->pc = 0x216f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f60: 0x280302d
    ctx->pc = 0x216f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f64: 0xc0b4724
    ctx->pc = 0x216F64u;
    SET_GPR_U32(ctx, 31, 0x216F6Cu);
    ctx->pc = 0x216F68u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F6Cu; }
    }
    if (ctx->pc != 0x216F6Cu) { return; }
    ctx->pc = 0x216F6Cu;
    // 0x216f6c: 0x8e64005c
    ctx->pc = 0x216f6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x216f70: 0xc0bf306
    ctx->pc = 0x216F70u;
    SET_GPR_U32(ctx, 31, 0x216F78u);
    ctx->pc = 0x216F74u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216F78u; }
    }
    if (ctx->pc != 0x216F78u) { return; }
    ctx->pc = 0x216F78u;
    // 0x216f78: 0x2c21021
    ctx->pc = 0x216f78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x216f7c: 0x24450002
    ctx->pc = 0x216f7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2));
    // 0x216f80: 0x8e62005c
    ctx->pc = 0x216f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x216f84: 0x2028021
    ctx->pc = 0x216f84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x216f88: 0x86020016
    ctx->pc = 0x216f88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x216f8c: 0x18400010
    ctx->pc = 0x216F8Cu;
    {
        const bool branch_taken_0x216f8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216F90u;
        SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
        if (branch_taken_0x216f8c) {
            ctx->pc = 0x216FD0u;
            goto label_216fd0;
        }
    }
    ctx->pc = 0x216F94u;
    // 0x216f94: 0x3c07003a
    ctx->pc = 0x216f94u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x216f98: 0x3484ff00
    ctx->pc = 0x216f98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x216f9c: 0x280302d
    ctx->pc = 0x216f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fa0: 0x24e75be0
    ctx->pc = 0x216fa0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23520));
    // 0x216fa4: 0xc0b4724
    ctx->pc = 0x216FA4u;
    SET_GPR_U32(ctx, 31, 0x216FACu);
    ctx->pc = 0x216FA8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 23), 4294955260)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FACu; }
    }
    if (ctx->pc != 0x216FACu) { return; }
    ctx->pc = 0x216FACu;
    // 0x216fac: 0x10000009
    ctx->pc = 0x216FACu;
    {
        const bool branch_taken_0x216fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216FB0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x216fac) {
            ctx->pc = 0x216FD4u;
            goto label_216fd4;
        }
    }
    ctx->pc = 0x216FB4u;
label_216fb4:
    // 0x216fb4: 0x8e67005c
    ctx->pc = 0x216fb4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x216fb8: 0x3c0400ff
    ctx->pc = 0x216fb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x216fbc: 0x3484ffff
    ctx->pc = 0x216fbcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x216fc0: 0x2c0282d
    ctx->pc = 0x216fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fc4: 0x280302d
    ctx->pc = 0x216fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fc8: 0xc0b4724
    ctx->pc = 0x216FC8u;
    SET_GPR_U32(ctx, 31, 0x216FD0u);
    ctx->pc = 0x216FCCu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216FD0u; }
    }
    if (ctx->pc != 0x216FD0u) { return; }
    ctx->pc = 0x216FD0u;
label_216fd0:
    // 0x216fd0: 0x26940001
    ctx->pc = 0x216fd0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_216fd4:
    // 0x216fd4: 0x26310001
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x216fd8: 0x232102a
    ctx->pc = 0x216fd8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x216fdc: 0x1440ffd4
    ctx->pc = 0x216FDCu;
    {
        const bool branch_taken_0x216fdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216FE0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294965456)));
        if (branch_taken_0x216fdc) {
            ctx->pc = 0x216F30u;
            goto label_216f30;
        }
    }
    ctx->pc = 0x216FE4u;
label_216fe4:
    // 0x216fe4: 0xdfbf0090
    ctx->pc = 0x216fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x216fe8: 0xdfbe0080
    ctx->pc = 0x216fe8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x216fec: 0xdfb70070
    ctx->pc = 0x216fecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x216ff0: 0xdfb60060
    ctx->pc = 0x216ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216ff4: 0xdfb50050
    ctx->pc = 0x216ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216ff8: 0xdfb40040
    ctx->pc = 0x216ff8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216ffc: 0xdfb30030
    ctx->pc = 0x216ffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217000: 0xdfb20020
    ctx->pc = 0x217000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217004: 0xdfb10010
    ctx->pc = 0x217004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217008: 0xdfb00000
    ctx->pc = 0x217008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21700c: 0x3e00008
    ctx->pc = 0x21700Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217010u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216ED4u: goto label_216ed4;
            case 0x216F10u: goto label_216f10;
            case 0x216F14u: goto label_216f14;
            case 0x216F30u: goto label_216f30;
            case 0x216FB4u: goto label_216fb4;
            case 0x216FD0u: goto label_216fd0;
            case 0x216FD4u: goto label_216fd4;
            case 0x216FE4u: goto label_216fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217014u;
}
