#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetTransmitter
// Address: 0x2145a8 - 0x21473c
void GetTransmitter_0x2145a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2145a8u;

    // 0x2145a8: 0x27bdff70
    ctx->pc = 0x2145a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2145ac: 0xffbf0070
    ctx->pc = 0x2145acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2145b0: 0xffb50060
    ctx->pc = 0x2145b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2145b4: 0xffb40050
    ctx->pc = 0x2145b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2145b8: 0xffb30040
    ctx->pc = 0x2145b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2145bc: 0xffb20030
    ctx->pc = 0x2145bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2145c0: 0xffb10020
    ctx->pc = 0x2145c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2145c4: 0xffb00010
    ctx->pc = 0x2145c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2145c8: 0xe7b40080
    ctx->pc = 0x2145c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2145cc: 0x80882d
    ctx->pc = 0x2145ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145d0: 0x4480a000
    ctx->pc = 0x2145d0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x2145d4: 0x3c020034
    ctx->pc = 0x2145d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2145d8: 0x8c428b70
    ctx->pc = 0x2145d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x2145dc: 0x1c400003
    ctx->pc = 0x2145DCu;
    {
        const bool branch_taken_0x2145dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2145E0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2145dc) {
            ctx->pc = 0x2145ECu;
            goto label_2145ec;
        }
    }
    ctx->pc = 0x2145E4u;
    // 0x2145e4: 0x1000004b
    ctx->pc = 0x2145E4u;
    {
        const bool branch_taken_0x2145e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2145E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2145e4) {
            ctx->pc = 0x214714u;
            goto label_214714;
        }
    }
    ctx->pc = 0x2145ECu;
label_2145ec:
    // 0x2145ec: 0x3c020034
    ctx->pc = 0x2145ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2145f0: 0x8c428b70
    ctx->pc = 0x2145f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937456)));
    // 0x2145f4: 0x18400024
    ctx->pc = 0x2145F4u;
    {
        const bool branch_taken_0x2145f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2145F8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2145f4) {
            ctx->pc = 0x214688u;
            goto label_214688;
        }
    }
    ctx->pc = 0x2145FCu;
    // 0x2145fc: 0x3c020033
    ctx->pc = 0x2145fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x214600: 0x24554b70
    ctx->pc = 0x214600u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x214604: 0x3c140032
    ctx->pc = 0x214604u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
    // 0x214608: 0x3c130034
    ctx->pc = 0x214608u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x21460c: 0x101180
    ctx->pc = 0x21460cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 6));
label_214610:
    // 0x214610: 0x551821
    ctx->pc = 0x214610u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x214614: 0x90620000
    ctx->pc = 0x214614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214618: 0x54400017
    ctx->pc = 0x214618u;
    {
        const bool branch_taken_0x214618 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x214618) {
            ctx->pc = 0x21461Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x214678u;
            goto label_214678;
        }
    }
    ctx->pc = 0x214620u;
    // 0x214620: 0x8e82f7bc
    ctx->pc = 0x214620u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294965180)));
    // 0x214624: 0x52020014
    ctx->pc = 0x214624u;
    {
        const bool branch_taken_0x214624 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        if (branch_taken_0x214624) {
            ctx->pc = 0x214628u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x214678u;
            goto label_214678;
        }
    }
    ctx->pc = 0x21462Cu;
    // 0x21462c: 0xc62c0000
    ctx->pc = 0x21462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x214630: 0xc4600010
    ctx->pc = 0x214630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214634: 0x46006301
    ctx->pc = 0x214634u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x214638: 0xe7ac0000
    ctx->pc = 0x214638u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21463c: 0xafa00004
    ctx->pc = 0x21463cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x214640: 0xc62d0008
    ctx->pc = 0x214640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x214644: 0xc4600018
    ctx->pc = 0x214644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214648: 0x46006b41
    ctx->pc = 0x214648u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x21464c: 0xc0b5c34
    ctx->pc = 0x21464Cu;
    SET_GPR_U32(ctx, 31, 0x214654u);
    ctx->pc = 0x214650u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214654u; }
    }
    if (ctx->pc != 0x214654u) { return; }
    ctx->pc = 0x214654u;
    // 0x214654: 0x6420006
    ctx->pc = 0x214654u;
    {
        const bool branch_taken_0x214654 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x214654) {
            ctx->pc = 0x214658u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x214670u;
            goto label_214670;
        }
    }
    ctx->pc = 0x21465Cu;
    // 0x21465c: 0x46140034
    ctx->pc = 0x21465cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214660: 0x0
    ctx->pc = 0x214660u;
    // NOP
    // 0x214664: 0x45020004
    ctx->pc = 0x214664u;
    {
        const bool branch_taken_0x214664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x214664) {
            ctx->pc = 0x214668u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x214678u;
            goto label_214678;
        }
    }
    ctx->pc = 0x21466Cu;
    // 0x21466c: 0x46000506
    ctx->pc = 0x21466cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_214670:
    // 0x214670: 0x200902d
    ctx->pc = 0x214670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214674: 0x26100001
    ctx->pc = 0x214674u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_214678:
    // 0x214678: 0x8e628b70
    ctx->pc = 0x214678u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294937456)));
    // 0x21467c: 0x202102a
    ctx->pc = 0x21467cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x214680: 0x1440ffe3
    ctx->pc = 0x214680u;
    {
        const bool branch_taken_0x214680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x214684u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 6));
        if (branch_taken_0x214680) {
            ctx->pc = 0x214610u;
            goto label_214610;
        }
    }
    ctx->pc = 0x214688u;
label_214688:
    // 0x214688: 0x3c030032
    ctx->pc = 0x214688u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21468c: 0x8c62f7bc
    ctx->pc = 0x21468cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965180)));
    // 0x214690: 0x4410003
    ctx->pc = 0x214690u;
    {
        const bool branch_taken_0x214690 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x214694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x214690) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214698u;
    // 0x214698: 0x10000018
    ctx->pc = 0x214698u;
    {
        const bool branch_taken_0x214698 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21469Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965180), GPR_U32(ctx, 18));
        if (branch_taken_0x214698) {
            ctx->pc = 0x2146FCu;
            goto label_2146fc;
        }
    }
    ctx->pc = 0x2146A0u;
label_2146a0:
    // 0x2146a0: 0x24424b70
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x2146a4: 0x3c100032
    ctx->pc = 0x2146a4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2146a8: 0x8e03f7bc
    ctx->pc = 0x2146a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294965180)));
    // 0x2146ac: 0x31980
    ctx->pc = 0x2146acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x2146b0: 0x621821
    ctx->pc = 0x2146b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2146b4: 0xc62c0000
    ctx->pc = 0x2146b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2146b8: 0xc4600010
    ctx->pc = 0x2146b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146bc: 0x46006301
    ctx->pc = 0x2146bcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2146c0: 0xe7ac0000
    ctx->pc = 0x2146c0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2146c4: 0xafa00004
    ctx->pc = 0x2146c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2146c8: 0xc62d0008
    ctx->pc = 0x2146c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2146cc: 0xc4600018
    ctx->pc = 0x2146ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146d0: 0x46006b41
    ctx->pc = 0x2146d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2146d4: 0xc0b5c34
    ctx->pc = 0x2146D4u;
    SET_GPR_U32(ctx, 31, 0x2146DCu);
    ctx->pc = 0x2146D8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146DCu; }
    }
    if (ctx->pc != 0x2146DCu) { return; }
    ctx->pc = 0x2146DCu;
    // 0x2146dc: 0x3c013f2a
    ctx->pc = 0x2146dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
    // 0x2146e0: 0x3421c083
    ctx->pc = 0x2146e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
    // 0x2146e4: 0x44810800
    ctx->pc = 0x2146e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2146e8: 0x46010002
    ctx->pc = 0x2146e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2146ec: 0x4600a036
    ctx->pc = 0x2146ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2146f0: 0x0
    ctx->pc = 0x2146f0u;
    // NOP
    // 0x2146f4: 0x45030001
    ctx->pc = 0x2146F4u;
    {
        const bool branch_taken_0x2146f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2146f4) {
            ctx->pc = 0x2146F8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294965180), GPR_U32(ctx, 18));
            ctx->pc = 0x2146FCu;
            goto label_2146fc;
        }
    }
    ctx->pc = 0x2146FCu;
label_2146fc:
    // 0x2146fc: 0x3c020032
    ctx->pc = 0x2146fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x214700: 0x8c43f7bc
    ctx->pc = 0x214700u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965180)));
    // 0x214704: 0x31980
    ctx->pc = 0x214704u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x214708: 0x3c020033
    ctx->pc = 0x214708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x21470c: 0x24424b70
    ctx->pc = 0x21470cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19312));
    // 0x214710: 0x621021
    ctx->pc = 0x214710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_214714:
    // 0x214714: 0xdfbf0070
    ctx->pc = 0x214714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x214718: 0xdfb50060
    ctx->pc = 0x214718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21471c: 0xdfb40050
    ctx->pc = 0x21471cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214720: 0xdfb30040
    ctx->pc = 0x214720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214724: 0xdfb20030
    ctx->pc = 0x214724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214728: 0xdfb10020
    ctx->pc = 0x214728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21472c: 0xdfb00010
    ctx->pc = 0x21472cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214730: 0xc7b40080
    ctx->pc = 0x214730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214734: 0x3e00008
    ctx->pc = 0x214734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214738u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2145ECu: goto label_2145ec;
            case 0x214610u: goto label_214610;
            case 0x214670u: goto label_214670;
            case 0x214678u: goto label_214678;
            case 0x214688u: goto label_214688;
            case 0x2146A0u: goto label_2146a0;
            case 0x2146FCu: goto label_2146fc;
            case 0x214714u: goto label_214714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21473Cu;
}
