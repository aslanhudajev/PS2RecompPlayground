#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TimerInit
// Address: 0x2d2a88 - 0x2d2bbc
void TimerInit_0x2d2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2a88u;

    // 0x2d2a88: 0x27bdffa0
    ctx->pc = 0x2d2a88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2a8c: 0xffbf0050
    ctx->pc = 0x2d2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d2a90: 0xffb40040
    ctx->pc = 0x2d2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d2a94: 0xffb30030
    ctx->pc = 0x2d2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d2a98: 0xffb20020
    ctx->pc = 0x2d2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d2a9c: 0xffb10010
    ctx->pc = 0x2d2a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2aa0: 0xffb00000
    ctx->pc = 0x2d2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2aa4: 0x3c02003a
    ctx->pc = 0x2d2aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2aa8: 0xac441d20
    ctx->pc = 0x2d2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7456), GPR_U32(ctx, 4));
    // 0x2d2aac: 0x3c04003a
    ctx->pc = 0x2d2aacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d2ab0: 0x24842050
    ctx->pc = 0x2d2ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8272));
    // 0x2d2ab4: 0xc0b4a76
    ctx->pc = 0x2D2AB4u;
    SET_GPR_U32(ctx, 31, 0x2D2ABCu);
    ctx->pc = 0x2D2AB8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
    ctx->pc = 0x2D29D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_timersFYB_0x2d29d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2ABCu; }
    }
    if (ctx->pc != 0x2D2ABCu) { return; }
    ctx->pc = 0x2D2ABCu;
    // 0x2d2abc: 0x3c02003a
    ctx->pc = 0x2d2abcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2ac0: 0xac4021d0
    ctx->pc = 0x2d2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8656), GPR_U32(ctx, 0));
    // 0x2d2ac4: 0x3c02003a
    ctx->pc = 0x2d2ac4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2ac8: 0xac4021d4
    ctx->pc = 0x2d2ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8660), GPR_U32(ctx, 0));
    // 0x2d2acc: 0x3c02003d
    ctx->pc = 0x2d2accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2d2ad0: 0xac402ce4
    ctx->pc = 0x2d2ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11492), GPR_U32(ctx, 0));
    // 0x2d2ad4: 0x3c03003a
    ctx->pc = 0x2d2ad4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d2ad8: 0x24020001
    ctx->pc = 0x2d2ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2adc: 0xac622048
    ctx->pc = 0x2d2adcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8264), GPR_U32(ctx, 2));
    // 0x2d2ae0: 0x3c02003a
    ctx->pc = 0x2d2ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d2ae4: 0x3c0133d6
    ctx->pc = 0x2d2ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)13270 << 16));
    // 0x2d2ae8: 0x3421bf93
    ctx->pc = 0x2d2ae8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49043));
    // 0x2d2aec: 0x44810000
    ctx->pc = 0x2d2aecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d2af0: 0xe44021e4
    ctx->pc = 0x2d2af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8676), bits); }
    // 0x2d2af4: 0x882d
    ctx->pc = 0x2d2af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2af8: 0x3c14003a
    ctx->pc = 0x2d2af8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2d2afc: 0x3c13003a
    ctx->pc = 0x2d2afcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2d2b00: 0x260102d
    ctx->pc = 0x2d2b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b04: 0x245221d8
    ctx->pc = 0x2d2b04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 8664));
    // 0x2d2b08: 0x202d
    ctx->pc = 0x2d2b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b0c: 0x0
    ctx->pc = 0x2d2b0cu;
    // NOP
label_2d2b10:
    // 0x2d2b10: 0x8e851d20
    ctx->pc = 0x2d2b10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 7456)));
    // 0x2d2b14: 0x302d
    ctx->pc = 0x2d2b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b18: 0x382d
    ctx->pc = 0x2d2b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b1c: 0x24080001
    ctx->pc = 0x2d2b1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2b20: 0xc0b0b54
    ctx->pc = 0x2D2B20u;
    SET_GPR_U32(ctx, 31, 0x2D2B28u);
    ctx->pc = 0x2D2B24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 12));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B28u; }
    }
    if (ctx->pc != 0x2D2B28u) { return; }
    ctx->pc = 0x2D2B28u;
    // 0x2d2b28: 0x40202d
    ctx->pc = 0x2d2b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2b2c: 0x111080
    ctx->pc = 0x2d2b2cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2d2b30: 0x521021
    ctx->pc = 0x2d2b30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d2b34: 0x10800015
    ctx->pc = 0x2D2B34u;
    {
        const bool branch_taken_0x2d2b34 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2B38u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x2d2b34) {
            ctx->pc = 0x2D2B8Cu;
            goto label_2d2b8c;
        }
    }
    ctx->pc = 0x2D2B3Cu;
    // 0x2d2b3c: 0x3c0500ff
    ctx->pc = 0x2d2b3cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)255 << 16));
    // 0x2d2b40: 0xc0b0f40
    ctx->pc = 0x2D2B40u;
    SET_GPR_U32(ctx, 31, 0x2D2B48u);
    ctx->pc = 0x2D2B44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B48u; }
    }
    if (ctx->pc != 0x2D2B48u) { return; }
    ctx->pc = 0x2D2B48u;
    // 0x2d2b48: 0x16200009
    ctx->pc = 0x2D2B48u;
    {
        const bool branch_taken_0x2d2b48 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2B4Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2d2b48) {
            ctx->pc = 0x2D2B70u;
            goto label_2d2b70;
        }
    }
    ctx->pc = 0x2D2B50u;
    // 0x2d2b50: 0x8e6421d8
    ctx->pc = 0x2d2b50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8664)));
    // 0x2d2b54: 0x24050100
    ctx->pc = 0x2d2b54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d2b58: 0x3c01bf80
    ctx->pc = 0x2d2b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x2d2b5c: 0x44816000
    ctx->pc = 0x2d2b5cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2d2b60: 0xc0b0df2
    ctx->pc = 0x2D2B60u;
    SET_GPR_U32(ctx, 31, 0x2D2B68u);
    ctx->pc = 0x2D2B64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B68u; }
    }
    if (ctx->pc != 0x2D2B68u) { return; }
    ctx->pc = 0x2D2B68u;
    // 0x2d2b68: 0x10000009
    ctx->pc = 0x2D2B68u;
    {
        const bool branch_taken_0x2d2b68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D2B6Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2d2b68) {
            ctx->pc = 0x2D2B90u;
            goto label_2d2b90;
        }
    }
    ctx->pc = 0x2D2B70u;
label_2d2b70:
    // 0x2d2b70: 0x2128021
    ctx->pc = 0x2d2b70u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2d2b74: 0x8e040000
    ctx->pc = 0x2d2b74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2b78: 0xc0b0dc6
    ctx->pc = 0x2D2B78u;
    SET_GPR_U32(ctx, 31, 0x2D2B80u);
    ctx->pc = 0x2D2B7Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3718u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetY_0x2c3718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B80u; }
    }
    if (ctx->pc != 0x2D2B80u) { return; }
    ctx->pc = 0x2D2B80u;
    // 0x2d2b80: 0x8e040000
    ctx->pc = 0x2d2b80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2b84: 0xc0b0ce8
    ctx->pc = 0x2D2B84u;
    SET_GPR_U32(ctx, 31, 0x2D2B8Cu);
    ctx->pc = 0x2D2B88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2B8Cu; }
    }
    if (ctx->pc != 0x2D2B8Cu) { return; }
    ctx->pc = 0x2D2B8Cu;
label_2d2b8c:
    // 0x2d2b8c: 0x26310001
    ctx->pc = 0x2d2b8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2d2b90:
    // 0x2d2b90: 0x2a220003
    ctx->pc = 0x2d2b90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x2d2b94: 0x1440ffde
    ctx->pc = 0x2D2B94u;
    {
        const bool branch_taken_0x2d2b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2B98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b94) {
            ctx->pc = 0x2D2B10u;
            goto label_2d2b10;
        }
    }
    ctx->pc = 0x2D2B9Cu;
    // 0x2d2b9c: 0xdfbf0050
    ctx->pc = 0x2d2b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2ba0: 0xdfb40040
    ctx->pc = 0x2d2ba0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2ba4: 0xdfb30030
    ctx->pc = 0x2d2ba4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2ba8: 0xdfb20020
    ctx->pc = 0x2d2ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2bac: 0xdfb10010
    ctx->pc = 0x2d2bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2bb0: 0xdfb00000
    ctx->pc = 0x2d2bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2bb4: 0x3e00008
    ctx->pc = 0x2D2BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2BB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D2B10u: goto label_2d2b10;
            case 0x2D2B70u: goto label_2d2b70;
            case 0x2D2B8Cu: goto label_2d2b8c;
            case 0x2D2B90u: goto label_2d2b90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2BBCu;
}
