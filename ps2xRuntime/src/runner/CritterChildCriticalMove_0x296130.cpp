#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterChildCriticalMove
// Address: 0x296130 - 0x2962d0
void CritterChildCriticalMove_0x296130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296130u;

    // 0x296130: 0x27bdffe0
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296134: 0xffbf0010
    ctx->pc = 0x296134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296138: 0xffb00000
    ctx->pc = 0x296138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29613c: 0x80802d
    ctx->pc = 0x29613cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296140: 0x8e040004
    ctx->pc = 0x296140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296144: 0x86020124
    ctx->pc = 0x296144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296148: 0x24030090
    ctx->pc = 0x296148u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x29614c: 0x431018
    ctx->pc = 0x29614cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296150: 0x8c830124
    ctx->pc = 0x296150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x296154: 0x432021
    ctx->pc = 0x296154u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296158: 0x8e030008
    ctx->pc = 0x296158u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29615c: 0x24020001
    ctx->pc = 0x29615cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296160: 0x14620005
    ctx->pc = 0x296160u;
    {
        const bool branch_taken_0x296160 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x296164u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x296160) {
            ctx->pc = 0x296178u;
            goto label_296178;
        }
    }
    ctx->pc = 0x296168u;
    // 0x296168: 0x200202d
    ctx->pc = 0x296168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29616c: 0x24050011
    ctx->pc = 0x29616cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x296170: 0x1000000d
    ctx->pc = 0x296170u;
    {
        const bool branch_taken_0x296170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296174u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x296170) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x296178u;
label_296178:
    // 0x296178: 0x8c42e880
    ctx->pc = 0x296178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x29617c: 0x2442fffd
    ctx->pc = 0x29617cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x296180: 0x2c420003
    ctx->pc = 0x296180u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x296184: 0x1040000c
    ctx->pc = 0x296184u;
    {
        const bool branch_taken_0x296184 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296188u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x296184) {
            ctx->pc = 0x2961B8u;
            goto label_2961b8;
        }
    }
    ctx->pc = 0x29618Cu;
    // 0x29618c: 0x8c43d934
    ctx->pc = 0x29618cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x296190: 0x24020023
    ctx->pc = 0x296190u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x296194: 0x54620009
    ctx->pc = 0x296194u;
    {
        const bool branch_taken_0x296194 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296194) {
            ctx->pc = 0x296198u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->pc = 0x2961BCu;
            goto label_2961bc;
        }
    }
    ctx->pc = 0x29619Cu;
    // 0x29619c: 0x200202d
    ctx->pc = 0x29619cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2961a0: 0x24050020
    ctx->pc = 0x2961a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2961a4: 0x302d
    ctx->pc = 0x2961a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2961a8:
    // 0x2961a8: 0xc0a552c
    ctx->pc = 0x2961A8u;
    SET_GPR_U32(ctx, 31, 0x2961B0u);
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961B0u; }
    }
    if (ctx->pc != 0x2961B0u) { return; }
    ctx->pc = 0x2961B0u;
    // 0x2961b0: 0x10000005
    ctx->pc = 0x2961B0u;
    {
        const bool branch_taken_0x2961b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2961B4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2961b0) {
            ctx->pc = 0x2961C8u;
            goto label_2961c8;
        }
    }
    ctx->pc = 0x2961B8u;
label_2961b8:
    // 0x2961b8: 0x84820054
    ctx->pc = 0x2961b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
label_2961bc:
    // 0x2961bc: 0x4400002
    ctx->pc = 0x2961BCu;
    {
        const bool branch_taken_0x2961bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2961C0u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
        if (branch_taken_0x2961bc) {
            ctx->pc = 0x2961C8u;
            goto label_2961c8;
        }
    }
    ctx->pc = 0x2961C4u;
    // 0x2961c4: 0xa6030126
    ctx->pc = 0x2961c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 3));
label_2961c8:
    // 0x2961c8: 0x86020126
    ctx->pc = 0x2961c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2961cc: 0x441003b
    ctx->pc = 0x2961CCu;
    {
        const bool branch_taken_0x2961cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2961D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2961cc) {
            ctx->pc = 0x2962BCu;
            goto label_2962bc;
        }
    }
    ctx->pc = 0x2961D4u;
    // 0x2961d4: 0x8e0304fc
    ctx->pc = 0x2961d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x2961d8: 0x30620120
    ctx->pc = 0x2961d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 288));
    // 0x2961dc: 0x1040000f
    ctx->pc = 0x2961DCu;
    {
        const bool branch_taken_0x2961dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2961E0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x2961dc) {
            ctx->pc = 0x29621Cu;
            goto label_29621c;
        }
    }
    ctx->pc = 0x2961E4u;
    // 0x2961e4: 0x10400005
    ctx->pc = 0x2961E4u;
    {
        const bool branch_taken_0x2961e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2961E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2961e4) {
            ctx->pc = 0x2961FCu;
            goto label_2961fc;
        }
    }
    ctx->pc = 0x2961ECu;
    // 0x2961ec: 0x24050042
    ctx->pc = 0x2961ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 66));
    // 0x2961f0: 0xc0a552c
    ctx->pc = 0x2961F0u;
    SET_GPR_U32(ctx, 31, 0x2961F8u);
    ctx->pc = 0x2961F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2961F8u; }
    }
    if (ctx->pc != 0x2961F8u) { return; }
    ctx->pc = 0x2961F8u;
    // 0x2961f8: 0xa6020126
    ctx->pc = 0x2961f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_2961fc:
    // 0x2961fc: 0x86020126
    ctx->pc = 0x2961fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x296200: 0x441002e
    ctx->pc = 0x296200u;
    {
        const bool branch_taken_0x296200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x296204u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x296200) {
            ctx->pc = 0x2962BCu;
            goto label_2962bc;
        }
    }
    ctx->pc = 0x296208u;
    // 0x296208: 0x200202d
    ctx->pc = 0x296208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29620c: 0x24050041
    ctx->pc = 0x29620cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 65));
    // 0x296210: 0xc0a552c
    ctx->pc = 0x296210u;
    SET_GPR_U32(ctx, 31, 0x296218u);
    ctx->pc = 0x296214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296218u; }
    }
    if (ctx->pc != 0x296218u) { return; }
    ctx->pc = 0x296218u;
    // 0x296218: 0xa6020126
    ctx->pc = 0x296218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_29621c:
    // 0x29621c: 0x86020126
    ctx->pc = 0x29621cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x296220: 0x4410026
    ctx->pc = 0x296220u;
    {
        const bool branch_taken_0x296220 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x296224u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x296220) {
            ctx->pc = 0x2962BCu;
            goto label_2962bc;
        }
    }
    ctx->pc = 0x296228u;
    // 0x296228: 0x3c030035
    ctx->pc = 0x296228u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x29622c: 0x24631d90
    ctx->pc = 0x29622cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7568));
    // 0x296230: 0x3c020036
    ctx->pc = 0x296230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x296234: 0x8c42d750
    ctx->pc = 0x296234u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x296238: 0x21080
    ctx->pc = 0x296238u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x29623c: 0x431021
    ctx->pc = 0x29623cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296240: 0xc4400000
    ctx->pc = 0x296240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296244: 0x3c014248
    ctx->pc = 0x296244u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x296248: 0x44810800
    ctx->pc = 0x296248u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29624c: 0x46010002
    ctx->pc = 0x29624cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x296250: 0x46000064
    ctx->pc = 0x296250u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x296254: 0x44020800
    ctx->pc = 0x296254u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x296258: 0x44820800
    ctx->pc = 0x296258u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x29625c: 0x46800860
    ctx->pc = 0x29625cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x296260: 0xc60004f8
    ctx->pc = 0x296260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296264: 0x46000836
    ctx->pc = 0x296264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296268: 0x0
    ctx->pc = 0x296268u;
    // NOP
    // 0x29626c: 0x45000005
    ctx->pc = 0x29626Cu;
    {
        const bool branch_taken_0x29626c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x296270u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29626c) {
            ctx->pc = 0x296284u;
            goto label_296284;
        }
    }
    ctx->pc = 0x296274u;
    // 0x296274: 0x24050022
    ctx->pc = 0x296274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 34));
    // 0x296278: 0xc0a552c
    ctx->pc = 0x296278u;
    SET_GPR_U32(ctx, 31, 0x296280u);
    ctx->pc = 0x29627Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296280u; }
    }
    if (ctx->pc != 0x296280u) { return; }
    ctx->pc = 0x296280u;
    // 0x296280: 0xa6020126
    ctx->pc = 0x296280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_296284:
    // 0x296284: 0x86020126
    ctx->pc = 0x296284u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x296288: 0x441000c
    ctx->pc = 0x296288u;
    {
        const bool branch_taken_0x296288 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x29628Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x296288) {
            ctx->pc = 0x2962BCu;
            goto label_2962bc;
        }
    }
    ctx->pc = 0x296290u;
    // 0x296290: 0x8e0204fc
    ctx->pc = 0x296290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x296294: 0x30420010
    ctx->pc = 0x296294u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x296298: 0x10400005
    ctx->pc = 0x296298u;
    {
        const bool branch_taken_0x296298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29629Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296298) {
            ctx->pc = 0x2962B0u;
            goto label_2962b0;
        }
    }
    ctx->pc = 0x2962A0u;
    // 0x2962a0: 0x24050040
    ctx->pc = 0x2962a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2962a4: 0xc0a552c
    ctx->pc = 0x2962A4u;
    SET_GPR_U32(ctx, 31, 0x2962ACu);
    ctx->pc = 0x2962A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962ACu; }
    }
    if (ctx->pc != 0x2962ACu) { return; }
    ctx->pc = 0x2962ACu;
    // 0x2962ac: 0xa6020126
    ctx->pc = 0x2962acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_2962b0:
    // 0x2962b0: 0x86020126
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x2962b4: 0x4400002
    ctx->pc = 0x2962B4u;
    {
        const bool branch_taken_0x2962b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2962B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2962b4) {
            ctx->pc = 0x2962C0u;
            goto label_2962c0;
        }
    }
    ctx->pc = 0x2962BCu;
label_2962bc:
    // 0x2962bc: 0xa602012a
    ctx->pc = 0x2962bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 298), (uint16_t)GPR_U32(ctx, 2));
label_2962c0:
    // 0x2962c0: 0xdfbf0010
    ctx->pc = 0x2962c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2962c4: 0xdfb00000
    ctx->pc = 0x2962c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2962c8: 0x3e00008
    ctx->pc = 0x2962C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296178u: goto label_296178;
            case 0x2961A8u: goto label_2961a8;
            case 0x2961B8u: goto label_2961b8;
            case 0x2961BCu: goto label_2961bc;
            case 0x2961C8u: goto label_2961c8;
            case 0x2961FCu: goto label_2961fc;
            case 0x29621Cu: goto label_29621c;
            case 0x296284u: goto label_296284;
            case 0x2962B0u: goto label_2962b0;
            case 0x2962BCu: goto label_2962bc;
            case 0x2962C0u: goto label_2962c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2962D0u;
}
