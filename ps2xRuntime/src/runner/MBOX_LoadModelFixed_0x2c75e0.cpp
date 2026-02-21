#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_LoadModelFixed
// Address: 0x2c75e0 - 0x2c773c
void MBOX_LoadModelFixed_0x2c75e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c75e0u;

    // 0x2c75e0: 0x27bdff80
    ctx->pc = 0x2c75e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c75e4: 0xffbf0070
    ctx->pc = 0x2c75e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c75e8: 0xffb60060
    ctx->pc = 0x2c75e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2c75ec: 0xffb50050
    ctx->pc = 0x2c75ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2c75f0: 0xffb40040
    ctx->pc = 0x2c75f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2c75f4: 0xffb30030
    ctx->pc = 0x2c75f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c75f8: 0xffb20020
    ctx->pc = 0x2c75f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c75fc: 0xffb10010
    ctx->pc = 0x2c75fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c7600: 0xffb00000
    ctx->pc = 0x2c7600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c7604: 0x80a02d
    ctx->pc = 0x2c7604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7608: 0xa0b02d
    ctx->pc = 0x2c7608u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c760c: 0x100902d
    ctx->pc = 0x2c760cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7610: 0x3c020036
    ctx->pc = 0x2c7610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c7614: 0x6410004
    ctx->pc = 0x2C7614u;
    {
        const bool branch_taken_0x2c7614 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2C7618u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2c7614) {
            ctx->pc = 0x2C7628u;
            goto label_2c7628;
        }
    }
    ctx->pc = 0x2C761Cu;
    // 0x2c761c: 0xc0b1ca6
    ctx->pc = 0x2C761Cu;
    SET_GPR_U32(ctx, 31, 0x2C7624u);
    ctx->pc = 0x2C7298u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_AllocModel_0x2c7298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7624u; }
    }
    if (ctx->pc != 0x2C7624u) { return; }
    ctx->pc = 0x2C7624u;
    // 0x2c7624: 0x40902d
    ctx->pc = 0x2c7624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7628:
    // 0x2c7628: 0x121100
    ctx->pc = 0x2c7628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
    // 0x2c762c: 0x24420004
    ctx->pc = 0x2c762cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c7630: 0x8e030038
    ctx->pc = 0x2c7630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2c7634: 0x439821
    ctx->pc = 0x2c7634u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c7638: 0x8e750000
    ctx->pc = 0x2c7638u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c763c: 0x24020002
    ctx->pc = 0x2c763cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c7640: 0xae62000c
    ctx->pc = 0x2c7640u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2c7644: 0x128940
    ctx->pc = 0x2c7644u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 5));
    // 0x2c7648: 0x3c100038
    ctx->pc = 0x2c7648u;
    SET_GPR_U32(ctx, 16, ((uint32_t)56 << 16));
    // 0x2c764c: 0x2610c6e8
    ctx->pc = 0x2c764cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294952680));
    // 0x2c7650: 0x2302021
    ctx->pc = 0x2c7650u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2c7654: 0x280282d
    ctx->pc = 0x2c7654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7658: 0xc0bf42e
    ctx->pc = 0x2C7658u;
    SET_GPR_U32(ctx, 31, 0x2C7660u);
    ctx->pc = 0x2C765Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7660u; }
    }
    if (ctx->pc != 0x2C7660u) { return; }
    ctx->pc = 0x2C7660u;
    // 0x2c7660: 0x2118021
    ctx->pc = 0x2c7660u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2c7664: 0xa200001f
    ctx->pc = 0x2c7664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7668: 0x280202d
    ctx->pc = 0x2c7668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c766c: 0x3c05003b
    ctx->pc = 0x2c766cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2c7670: 0x24a570c0
    ctx->pc = 0x2c7670u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 28864));
    // 0x2c7674: 0x2c0302d
    ctx->pc = 0x2c7674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7678: 0xc0b4e7c
    ctx->pc = 0x2C7678u;
    SET_GPR_U32(ctx, 31, 0x2C7680u);
    ctx->pc = 0x2C767Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D39F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReadFile_0x2d39f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7680u; }
    }
    if (ctx->pc != 0x2C7680u) { return; }
    ctx->pc = 0x2C7680u;
    // 0x2c7680: 0x40802d
    ctx->pc = 0x2c7680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7684: 0x3c04003b
    ctx->pc = 0x2c7684u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c7688: 0x24847148
    ctx->pc = 0x2c7688u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29000));
    // 0x2c768c: 0x240282d
    ctx->pc = 0x2c768cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7690: 0x280302d
    ctx->pc = 0x2c7690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7694: 0xc0b4a34
    ctx->pc = 0x2C7694u;
    SET_GPR_U32(ctx, 31, 0x2C769Cu);
    ctx->pc = 0x2C7698u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C769Cu; }
    }
    if (ctx->pc != 0x2C769Cu) { return; }
    ctx->pc = 0x2C769Cu;
    // 0x2c769c: 0x8e680004
    ctx->pc = 0x2c769cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c76a0: 0x110102b
    ctx->pc = 0x2c76a0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x2c76a4: 0x10400006
    ctx->pc = 0x2C76A4u;
    {
        const bool branch_taken_0x2c76a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C76A8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2c76a4) {
            ctx->pc = 0x2C76C0u;
            goto label_2c76c0;
        }
    }
    ctx->pc = 0x2C76ACu;
    // 0x2c76ac: 0x24847178
    ctx->pc = 0x2c76acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29048));
    // 0x2c76b0: 0x240282d
    ctx->pc = 0x2c76b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76b4: 0x280302d
    ctx->pc = 0x2c76b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76b8: 0xc0b492e
    ctx->pc = 0x2C76B8u;
    SET_GPR_U32(ctx, 31, 0x2C76C0u);
    ctx->pc = 0x2C76BCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76C0u; }
    }
    if (ctx->pc != 0x2C76C0u) { return; }
    ctx->pc = 0x2C76C0u;
label_2c76c0:
    // 0x2c76c0: 0x26a40020
    ctx->pc = 0x2c76c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 32));
    // 0x2c76c4: 0x280282d
    ctx->pc = 0x2c76c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76c8: 0xc0bf42e
    ctx->pc = 0x2C76C8u;
    SET_GPR_U32(ctx, 31, 0x2C76D0u);
    ctx->pc = 0x2C76CCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2FD0B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x2fd0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76D0u; }
    }
    if (ctx->pc != 0x2C76D0u) { return; }
    ctx->pc = 0x2C76D0u;
    // 0x2c76d0: 0xa2a0003f
    ctx->pc = 0x2c76d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c76d4: 0x240202d
    ctx->pc = 0x2c76d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76d8: 0xc0b1cbc
    ctx->pc = 0x2C76D8u;
    SET_GPR_U32(ctx, 31, 0x2C76E0u);
    ctx->pc = 0x2C76DCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C72F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupModel_0x2c72f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C76E0u; }
    }
    if (ctx->pc != 0x2C76E0u) { return; }
    ctx->pc = 0x2C76E0u;
    // 0x2c76e0: 0x8e63000c
    ctx->pc = 0x2c76e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c76e4: 0x24020002
    ctx->pc = 0x2c76e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c76e8: 0x1462000a
    ctx->pc = 0x2C76E8u;
    {
        const bool branch_taken_0x2c76e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C76ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c76e8) {
            ctx->pc = 0x2C7714u;
            goto label_2c7714;
        }
    }
    ctx->pc = 0x2C76F0u;
    // 0x2c76f0: 0x24100001
    ctx->pc = 0x2c76f0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c76f4: 0xae70000c
    ctx->pc = 0x2c76f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 16));
    // 0x2c76f8: 0x280202d
    ctx->pc = 0x2c76f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c76fc: 0xc0b1d52
    ctx->pc = 0x2C76FCu;
    SET_GPR_U32(ctx, 31, 0x2C7704u);
    ctx->pc = 0x2C7700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C7548u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBLoadTexturesWait_0x2c7548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7704u; }
    }
    if (ctx->pc != 0x2C7704u) { return; }
    ctx->pc = 0x2C7704u;
    // 0x2c7704: 0x8e62000c
    ctx->pc = 0x2c7704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c7708: 0x50500001
    ctx->pc = 0x2C7708u;
    {
        const bool branch_taken_0x2c7708 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x2c7708) {
            ctx->pc = 0x2C770Cu;
            WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
            ctx->pc = 0x2C7710u;
            goto label_2c7710;
        }
    }
    ctx->pc = 0x2C7710u;
label_2c7710:
    // 0x2c7710: 0x240102d
    ctx->pc = 0x2c7710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7714:
    // 0x2c7714: 0xdfbf0070
    ctx->pc = 0x2c7714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c7718: 0xdfb60060
    ctx->pc = 0x2c7718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c771c: 0xdfb50050
    ctx->pc = 0x2c771cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7720: 0xdfb40040
    ctx->pc = 0x2c7720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7724: 0xdfb30030
    ctx->pc = 0x2c7724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7728: 0xdfb20020
    ctx->pc = 0x2c7728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c772c: 0xdfb10010
    ctx->pc = 0x2c772cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7730: 0xdfb00000
    ctx->pc = 0x2c7730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7734: 0x3e00008
    ctx->pc = 0x2C7734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7628u: goto label_2c7628;
            case 0x2C76C0u: goto label_2c76c0;
            case 0x2C7710u: goto label_2c7710;
            case 0x2C7714u: goto label_2c7714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C773Cu;
}
