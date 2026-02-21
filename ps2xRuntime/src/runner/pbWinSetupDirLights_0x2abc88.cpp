#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbWinSetupDirLights
// Address: 0x2abc88 - 0x2abd78
void pbWinSetupDirLights_0x2abc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2abc88u;

    // 0x2abc88: 0x27bdffc0
    ctx->pc = 0x2abc88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2abc8c: 0xffbf0030
    ctx->pc = 0x2abc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2abc90: 0xffb10020
    ctx->pc = 0x2abc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2abc94: 0xffb00010
    ctx->pc = 0x2abc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2abc98: 0x80882d
    ctx->pc = 0x2abc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abc9c: 0x3c020036
    ctx->pc = 0x2abc9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2abca0: 0x8c50dee0
    ctx->pc = 0x2abca0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2abca4: 0x8e02001c
    ctx->pc = 0x2abca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2abca8: 0x40282d
    ctx->pc = 0x2abca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abcac: 0x8c4200c4
    ctx->pc = 0x2abcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2abcb0: 0x1840000e
    ctx->pc = 0x2ABCB0u;
    {
        const bool branch_taken_0x2abcb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2ABCB4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2abcb0) {
            ctx->pc = 0x2ABCECu;
            goto label_2abcec;
        }
    }
    ctx->pc = 0x2ABCB8u;
    // 0x2abcb8: 0x41080
    ctx->pc = 0x2abcb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abcbc: 0x0
    ctx->pc = 0x2abcbcu;
    // NOP
label_2abcc0:
    // 0x2abcc0: 0x3a21821
    ctx->pc = 0x2abcc0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2abcc4: 0x41140
    ctx->pc = 0x2abcc4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 5));
    // 0x2abcc8: 0x244200f0
    ctx->pc = 0x2abcc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 240));
    // 0x2abccc: 0x451021
    ctx->pc = 0x2abcccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2abcd0: 0xac620000
    ctx->pc = 0x2abcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2abcd4: 0x24840001
    ctx->pc = 0x2abcd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2abcd8: 0x8e05001c
    ctx->pc = 0x2abcd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2abcdc: 0x8ca200c4
    ctx->pc = 0x2abcdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2abce0: 0x82102a
    ctx->pc = 0x2abce0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2abce4: 0x1440fff6
    ctx->pc = 0x2ABCE4u;
    {
        const bool branch_taken_0x2abce4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ABCE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2abce4) {
            ctx->pc = 0x2ABCC0u;
            goto label_2abcc0;
        }
    }
    ctx->pc = 0x2ABCECu;
label_2abcec:
    // 0x2abcec: 0x28820003
    ctx->pc = 0x2abcecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x2abcf0: 0x1040000a
    ctx->pc = 0x2ABCF0u;
    {
        const bool branch_taken_0x2abcf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ABCF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2abcf0) {
            ctx->pc = 0x2ABD1Cu;
            goto label_2abd1c;
        }
    }
    ctx->pc = 0x2ABCF8u;
    // 0x2abcf8: 0x24438410
    ctx->pc = 0x2abcf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294935568));
    // 0x2abcfc: 0x0
    ctx->pc = 0x2abcfcu;
    // NOP
label_2abd00:
    // 0x2abd00: 0x41080
    ctx->pc = 0x2abd00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2abd04: 0x3a21021
    ctx->pc = 0x2abd04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2abd08: 0xac430000
    ctx->pc = 0x2abd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2abd0c: 0x24840001
    ctx->pc = 0x2abd0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2abd10: 0x28820003
    ctx->pc = 0x2abd10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 3));
    // 0x2abd14: 0x1440fffa
    ctx->pc = 0x2ABD14u;
    {
        const bool branch_taken_0x2abd14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2abd14) {
            ctx->pc = 0x2ABD00u;
            goto label_2abd00;
        }
    }
    ctx->pc = 0x2ABD1Cu;
label_2abd1c:
    // 0x2abd1c: 0x8fa50000
    ctx->pc = 0x2abd1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abd20: 0x8fa60004
    ctx->pc = 0x2abd20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2abd24: 0x8fa70008
    ctx->pc = 0x2abd24u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abd28: 0x262400b0
    ctx->pc = 0x2abd28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 176));
    // 0x2abd2c: 0x24a50010
    ctx->pc = 0x2abd2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 16));
    // 0x2abd30: 0x24c60010
    ctx->pc = 0x2abd30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2abd34: 0xc0b969c
    ctx->pc = 0x2ABD34u;
    SET_GPR_U32(ctx, 31, 0x2ABD3Cu);
    ctx->pc = 0x2ABD38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 16));
    ctx->pc = 0x2E5A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0NormalLightMatrix_0x2e5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD3Cu; }
    }
    if (ctx->pc != 0x2ABD3Cu) { return; }
    ctx->pc = 0x2ABD3Cu;
    // 0x2abd3c: 0x8e08001c
    ctx->pc = 0x2abd3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2abd40: 0x262400f0
    ctx->pc = 0x2abd40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 240));
    // 0x2abd44: 0x8fa50000
    ctx->pc = 0x2abd44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abd48: 0x8fa60004
    ctx->pc = 0x2abd48u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2abd4c: 0x8fa70008
    ctx->pc = 0x2abd4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abd50: 0xc0b96cc
    ctx->pc = 0x2ABD50u;
    SET_GPR_U32(ctx, 31, 0x2ABD58u);
    ctx->pc = 0x2ABD54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 208));
    ctx->pc = 0x2E5B30u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0LightColorMatrix_0x2e5b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ABD58u; }
    }
    if (ctx->pc != 0x2ABD58u) { return; }
    ctx->pc = 0x2ABD58u;
    // 0x2abd58: 0x3c013f80
    ctx->pc = 0x2abd58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2abd5c: 0x44810000
    ctx->pc = 0x2abd5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2abd60: 0xe62000ec
    ctx->pc = 0x2abd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x2abd64: 0xdfbf0030
    ctx->pc = 0x2abd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abd68: 0xdfb10020
    ctx->pc = 0x2abd68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abd6c: 0xdfb00010
    ctx->pc = 0x2abd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abd70: 0x3e00008
    ctx->pc = 0x2ABD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABD74u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ABCC0u: goto label_2abcc0;
            case 0x2ABCECu: goto label_2abcec;
            case 0x2ABD00u: goto label_2abd00;
            case 0x2ABD1Cu: goto label_2abd1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ABD78u;
}
