#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAnim
// Address: 0x210340 - 0x2104b8
void InitAnim_0x210340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210340u;

    // 0x210340: 0x27bdffb0
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x210344: 0xffbf0030
    ctx->pc = 0x210344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x210348: 0xffb20020
    ctx->pc = 0x210348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21034c: 0xffb10010
    ctx->pc = 0x21034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x210350: 0xffb00000
    ctx->pc = 0x210350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210354: 0xe7b40040
    ctx->pc = 0x210354u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x210358: 0x80802d
    ctx->pc = 0x210358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21035c: 0xc0882d
    ctx->pc = 0x21035cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210360: 0x46006506
    ctx->pc = 0x210360u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x210364: 0x8606000c
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x210368: 0xa6102a
    ctx->pc = 0x210368u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x21036c: 0x1440000a
    ctx->pc = 0x21036Cu;
    {
        const bool branch_taken_0x21036c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x210370u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21036c) {
            ctx->pc = 0x210398u;
            goto label_210398;
        }
    }
    ctx->pc = 0x210374u;
    // 0x210374: 0x3c04003a
    ctx->pc = 0x210374u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x210378: 0x248457a8
    ctx->pc = 0x210378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22440));
    // 0x21037c: 0xc0b492e
    ctx->pc = 0x21037Cu;
    SET_GPR_U32(ctx, 31, 0x210384u);
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210384u; }
    }
    if (ctx->pc != 0x210384u) { return; }
    ctx->pc = 0x210384u;
    // 0x210384: 0x8602000c
    ctx->pc = 0x210384u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x210388: 0x1c400003
    ctx->pc = 0x210388u;
    {
        const bool branch_taken_0x210388 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21038Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210388) {
            ctx->pc = 0x210398u;
            goto label_210398;
        }
    }
    ctx->pc = 0x210390u;
    // 0x210390: 0x10000042
    ctx->pc = 0x210390u;
    {
        const bool branch_taken_0x210390 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210394u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210390) {
            ctx->pc = 0x21049Cu;
            goto label_21049c;
        }
    }
    ctx->pc = 0x210398u;
label_210398:
    // 0x210398: 0x3c020031
    ctx->pc = 0x210398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x21039c: 0xc440ffb4
    ctx->pc = 0x21039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2103a0: 0xe6000030
    ctx->pc = 0x2103a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2103a4: 0xa612001e
    ctx->pc = 0x2103a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 18));
    // 0x2103a8: 0x24020030
    ctx->pc = 0x2103a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2103ac: 0xa21018
    ctx->pc = 0x2103acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2103b0: 0x8e030000
    ctx->pc = 0x2103b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2103b4: 0x431021
    ctx->pc = 0x2103b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2103b8: 0x84430020
    ctx->pc = 0x2103b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2103bc: 0x84440024
    ctx->pc = 0x2103bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2103c0: 0x84420022
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x2103c4: 0x58400009
    ctx->pc = 0x2103C4u;
    {
        const bool branch_taken_0x2103c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2103c4) {
            ctx->pc = 0x2103C8u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x2103ECu;
            goto label_2103ec;
        }
    }
    ctx->pc = 0x2103CCu;
    // 0x2103cc: 0x44820000
    ctx->pc = 0x2103ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2103d0: 0x46800020
    ctx->pc = 0x2103d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2103d4: 0x3c013d08
    ctx->pc = 0x2103d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x2103d8: 0x34218889
    ctx->pc = 0x2103d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x2103dc: 0x44810800
    ctx->pc = 0x2103dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2103e0: 0x46010002
    ctx->pc = 0x2103e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2103e4: 0xc6010028
    ctx->pc = 0x2103e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2103e8: 0x46010002
    ctx->pc = 0x2103e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2103ec:
    // 0x2103ec: 0xe600002c
    ctx->pc = 0x2103ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2103f0: 0x71102a
    ctx->pc = 0x2103f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x2103f4: 0x2880b
    ctx->pc = 0x2103f4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x2103f8: 0x3c02003c
    ctx->pc = 0x2103f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2103fc: 0xc601002c
    ctx->pc = 0x2103fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210400: 0xc440c9a0
    ctx->pc = 0x210400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210404: 0x46000882
    ctx->pc = 0x210404u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210408: 0x44910800
    ctx->pc = 0x210408u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 17);
    // 0x21040c: 0x46800860
    ctx->pc = 0x21040cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x210410: 0x44800000
    ctx->pc = 0x210410u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x210414: 0x4600a032
    ctx->pc = 0x210414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210418: 0x0
    ctx->pc = 0x210418u;
    // NOP
    // 0x21041c: 0x4501000d
    ctx->pc = 0x21041Cu;
    {
        const bool branch_taken_0x21041c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x210420u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        if (branch_taken_0x21041c) {
            ctx->pc = 0x210454u;
            goto label_210454;
        }
    }
    ctx->pc = 0x210424u;
    // 0x210424: 0x46011002
    ctx->pc = 0x210424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x210428: 0xc6010030
    ctx->pc = 0x210428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21042c: 0x46000801
    ctx->pc = 0x21042cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x210430: 0x3c013d08
    ctx->pc = 0x210430u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x210434: 0x34218889
    ctx->pc = 0x210434u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x210438: 0x44811000
    ctx->pc = 0x210438u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x21043c: 0x46020001
    ctx->pc = 0x21043cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x210440: 0xe6000020
    ctx->pc = 0x210440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x210444: 0x4601a040
    ctx->pc = 0x210444u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x210448: 0x46020841
    ctx->pc = 0x210448u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x21044c: 0x10000007
    ctx->pc = 0x21044Cu;
    {
        const bool branch_taken_0x21044c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210450u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        if (branch_taken_0x21044c) {
            ctx->pc = 0x21046Cu;
            goto label_21046c;
        }
    }
    ctx->pc = 0x210454u;
label_210454:
    // 0x210454: 0xc6010018
    ctx->pc = 0x210454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210458: 0x46011042
    ctx->pc = 0x210458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x21045c: 0xc6000030
    ctx->pc = 0x21045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210460: 0x46010001
    ctx->pc = 0x210460u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x210464: 0xe6000020
    ctx->pc = 0x210464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x210468: 0xae000024
    ctx->pc = 0x210468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_21046c:
    // 0x21046c: 0x24020001
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210470: 0xa2020012
    ctx->pc = 0x210470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x210474: 0xae000014
    ctx->pc = 0x210474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x210478: 0x9602000e
    ctx->pc = 0x210478u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x21047c: 0xa602001c
    ctx->pc = 0x21047cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x210480: 0xa605000e
    ctx->pc = 0x210480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x210484: 0x96020036
    ctx->pc = 0x210484u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x210488: 0x3042f000
    ctx->pc = 0x210488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 61440));
    // 0x21048c: 0xa6020036
    ctx->pc = 0x21048cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x210490: 0xa6040034
    ctx->pc = 0x210490u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x210494: 0xa6030010
    ctx->pc = 0x210494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x210498: 0x24020001
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_21049c:
    // 0x21049c: 0xdfbf0030
    ctx->pc = 0x21049cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2104a0: 0xdfb20020
    ctx->pc = 0x2104a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2104a4: 0xdfb10010
    ctx->pc = 0x2104a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2104a8: 0xdfb00000
    ctx->pc = 0x2104a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2104ac: 0xc7b40040
    ctx->pc = 0x2104acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2104b0: 0x3e00008
    ctx->pc = 0x2104B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2104B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210398u: goto label_210398;
            case 0x2103ECu: goto label_2103ec;
            case 0x210454u: goto label_210454;
            case 0x21046Cu: goto label_21046c;
            case 0x21049Cu: goto label_21049c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2104B8u;
}
