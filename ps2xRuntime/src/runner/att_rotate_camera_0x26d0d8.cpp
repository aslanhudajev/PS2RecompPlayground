#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: att_rotate_camera
// Address: 0x26d0d8 - 0x26d450
void att_rotate_camera_0x26d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26d0d8u;

    // 0x26d0d8: 0x27bdffd0
    ctx->pc = 0x26d0d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d0dc: 0xffbf0010
    ctx->pc = 0x26d0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26d0e0: 0xffb00000
    ctx->pc = 0x26d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26d0e4: 0xe7b40020
    ctx->pc = 0x26d0e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26d0e8: 0x240301a0
    ctx->pc = 0x26d0e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 416));
    // 0x26d0ec: 0x831818
    ctx->pc = 0x26d0ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26d0f0: 0x3c020034
    ctx->pc = 0x26d0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d0f4: 0x2442eb60
    ctx->pc = 0x26d0f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26d0f8: 0x628021
    ctx->pc = 0x26d0f8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d0fc: 0xc61400b4
    ctx->pc = 0x26d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d100: 0x3c03003c
    ctx->pc = 0x26d100u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d104: 0x24623910
    ctx->pc = 0x26d104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26d108: 0xc4400004
    ctx->pc = 0x26d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d10c: 0xe4400008
    ctx->pc = 0x26d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x26d110: 0xc4603910
    ctx->pc = 0x26d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d114: 0xe4400004
    ctx->pc = 0x26d114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x26d118: 0xc09b242
    ctx->pc = 0x26D118u;
    SET_GPR_U32(ctx, 31, 0x26D120u);
    ctx->pc = 0x26D11Cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14608), bits); }
    ctx->pc = 0x26C908u;
    {
        const uint32_t __entryPc = ctx->pc;
        att_receive_yaw_0x26c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D120u; }
    }
    if (ctx->pc != 0x26D120u) { return; }
    ctx->pc = 0x26D120u;
    // 0x26d120: 0x3c02003c
    ctx->pc = 0x26d120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d124: 0x24453958
    ctx->pc = 0x26d124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 14680));
    // 0x26d128: 0x3c030031
    ctx->pc = 0x26d128u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x26d12c: 0x8c62ffbc
    ctx->pc = 0x26d12cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x26d130: 0x4400005
    ctx->pc = 0x26D130u;
    {
        const bool branch_taken_0x26d130 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D134u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x26d130) {
            ctx->pc = 0x26D148u;
            goto label_26d148;
        }
    }
    ctx->pc = 0x26D138u;
    // 0x26d138: 0x44820800
    ctx->pc = 0x26d138u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x26d13c: 0x46800860
    ctx->pc = 0x26d13cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d140: 0x10000009
    ctx->pc = 0x26D140u;
    {
        const bool branch_taken_0x26d140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D144u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26d140) {
            ctx->pc = 0x26D168u;
            goto label_26d168;
        }
    }
    ctx->pc = 0x26D148u;
label_26d148:
    // 0x26d148: 0x8c820000
    ctx->pc = 0x26d148u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d14c: 0x30430001
    ctx->pc = 0x26d14cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x26d150: 0x21042
    ctx->pc = 0x26d150u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x26d154: 0x621825
    ctx->pc = 0x26d154u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26d158: 0x44830800
    ctx->pc = 0x26d158u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x26d15c: 0x46800860
    ctx->pc = 0x26d15cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x26d160: 0x46010840
    ctx->pc = 0x26d160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26d164: 0xc4a00000
    ctx->pc = 0x26d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d168:
    // 0x26d168: 0x3c02003c
    ctx->pc = 0x26d168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d16c: 0x8c4238e4
    ctx->pc = 0x26d16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26d170: 0x18400042
    ctx->pc = 0x26D170u;
    {
        const bool branch_taken_0x26d170 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26D174u;
        ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26d170) {
            ctx->pc = 0x26D27Cu;
            goto label_26d27c;
        }
    }
    ctx->pc = 0x26D178u;
    // 0x26d178: 0x3c020034
    ctx->pc = 0x26d178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d17c: 0xc60100b4
    ctx->pc = 0x26d17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d180: 0xc440f8f4
    ctx->pc = 0x26d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d184: 0x46000832
    ctx->pc = 0x26d184u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d188: 0x0
    ctx->pc = 0x26d188u;
    // NOP
    // 0x26d18c: 0x4503003c
    ctx->pc = 0x26D18Cu;
    {
        const bool branch_taken_0x26d18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d18c) {
            ctx->pc = 0x26D190u;
            SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
            ctx->pc = 0x26D280u;
            goto label_26d280;
        }
    }
    ctx->pc = 0x26D194u;
    // 0x26d194: 0x46011840
    ctx->pc = 0x26d194u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x26d198: 0x3c014049
    ctx->pc = 0x26d198u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26d19c: 0x34210fdb
    ctx->pc = 0x26d19cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d1a0: 0x44810000
    ctx->pc = 0x26d1a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d1a4: 0x46010034
    ctx->pc = 0x26d1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1a8: 0x0
    ctx->pc = 0x26d1a8u;
    // NOP
    // 0x26d1ac: 0x45000006
    ctx->pc = 0x26D1ACu;
    {
        const bool branch_taken_0x26d1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D1B0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d1ac) {
            ctx->pc = 0x26D1C8u;
            goto label_26d1c8;
        }
    }
    ctx->pc = 0x26D1B4u;
    // 0x26d1b4: 0x3c0140c9
    ctx->pc = 0x26d1b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d1b8: 0x34210fdb
    ctx->pc = 0x26d1b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d1bc: 0x44810000
    ctx->pc = 0x26d1bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d1c0: 0x1000000d
    ctx->pc = 0x26D1C0u;
    {
        const bool branch_taken_0x26d1c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D1C4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26d1c0) {
            ctx->pc = 0x26D1F8u;
            goto label_26d1f8;
        }
    }
    ctx->pc = 0x26D1C8u;
label_26d1c8:
    // 0x26d1c8: 0xc60100b4
    ctx->pc = 0x26d1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d1cc: 0x3c01c049
    ctx->pc = 0x26d1ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26d1d0: 0x34210fdb
    ctx->pc = 0x26d1d0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d1d4: 0x44810000
    ctx->pc = 0x26d1d4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d1d8: 0x46000836
    ctx->pc = 0x26d1d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1dc: 0x0
    ctx->pc = 0x26d1dcu;
    // NOP
    // 0x26d1e0: 0x45020005
    ctx->pc = 0x26D1E0u;
    {
        const bool branch_taken_0x26d1e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d1e0) {
            ctx->pc = 0x26D1E4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D1F8u;
            goto label_26d1f8;
        }
    }
    ctx->pc = 0x26D1E8u;
    // 0x26d1e8: 0x3c0140c9
    ctx->pc = 0x26d1e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d1ec: 0x34210fdb
    ctx->pc = 0x26d1ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d1f0: 0x44810000
    ctx->pc = 0x26d1f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d1f4: 0x46000800
    ctx->pc = 0x26d1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d1f8:
    // 0x26d1f8: 0x46140034
    ctx->pc = 0x26d1f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d1fc: 0x0
    ctx->pc = 0x26d1fcu;
    // NOP
    // 0x26d200: 0x4500000d
    ctx->pc = 0x26D200u;
    {
        const bool branch_taken_0x26d200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D204u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d200) {
            ctx->pc = 0x26D238u;
            goto label_26d238;
        }
    }
    ctx->pc = 0x26D208u;
    // 0x26d208: 0x3c020034
    ctx->pc = 0x26d208u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d20c: 0xc441f8f4
    ctx->pc = 0x26d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d210: 0x4601a034
    ctx->pc = 0x26d210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d214: 0x0
    ctx->pc = 0x26d214u;
    // NOP
    // 0x26d218: 0x4503005d
    ctx->pc = 0x26D218u;
    {
        const bool branch_taken_0x26d218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d218) {
            ctx->pc = 0x26D21Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D390u;
            goto label_26d390;
        }
    }
    ctx->pc = 0x26D220u;
    // 0x26d220: 0x46000836
    ctx->pc = 0x26d220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d224: 0x0
    ctx->pc = 0x26d224u;
    // NOP
    // 0x26d228: 0x4500005c
    ctx->pc = 0x26D228u;
    {
        const bool branch_taken_0x26d228 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D22Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26d228) {
            ctx->pc = 0x26D39Cu;
            goto label_26d39c;
        }
    }
    ctx->pc = 0x26D230u;
    // 0x26d230: 0x10000058
    ctx->pc = 0x26D230u;
    {
        const bool branch_taken_0x26d230 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D234u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d230) {
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D238u;
label_26d238:
    // 0x26d238: 0x3c020034
    ctx->pc = 0x26d238u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d23c: 0xc60300b4
    ctx->pc = 0x26d23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d240: 0xc442f8f4
    ctx->pc = 0x26d240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d244: 0x46021841
    ctx->pc = 0x26d244u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x26d248: 0x3c014049
    ctx->pc = 0x26d248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26d24c: 0x34210fdb
    ctx->pc = 0x26d24cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d250: 0x44810000
    ctx->pc = 0x26d250u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d254: 0x46000834
    ctx->pc = 0x26d254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d258: 0x0
    ctx->pc = 0x26d258u;
    // NOP
    // 0x26d25c: 0x45020050
    ctx->pc = 0x26D25Cu;
    {
        const bool branch_taken_0x26d25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d25c) {
            ctx->pc = 0x26D260u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D3A0u;
            goto label_26d3a0;
        }
    }
    ctx->pc = 0x26D264u;
    // 0x26d264: 0x46031036
    ctx->pc = 0x26d264u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d268: 0x0
    ctx->pc = 0x26d268u;
    // NOP
    // 0x26d26c: 0x4502004c
    ctx->pc = 0x26D26Cu;
    {
        const bool branch_taken_0x26d26c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d26c) {
            ctx->pc = 0x26D270u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D3A0u;
            goto label_26d3a0;
        }
    }
    ctx->pc = 0x26D274u;
    // 0x26d274: 0x10000047
    ctx->pc = 0x26D274u;
    {
        const bool branch_taken_0x26d274 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D278u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d274) {
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D27Cu;
label_26d27c:
    // 0x26d27c: 0x3c02003c
    ctx->pc = 0x26d27cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_26d280:
    // 0x26d280: 0x8c4238e4
    ctx->pc = 0x26d280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14564)));
    // 0x26d284: 0x4410041
    ctx->pc = 0x26D284u;
    {
        const bool branch_taken_0x26d284 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26D288u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26d284) {
            ctx->pc = 0x26D38Cu;
            goto label_26d38c;
        }
    }
    ctx->pc = 0x26D28Cu;
    // 0x26d28c: 0xc60200b4
    ctx->pc = 0x26d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d290: 0xc440f8f4
    ctx->pc = 0x26d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d294: 0x46001032
    ctx->pc = 0x26d294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d298: 0x0
    ctx->pc = 0x26d298u;
    // NOP
    // 0x26d29c: 0x4503003d
    ctx->pc = 0x26D29Cu;
    {
        const bool branch_taken_0x26d29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d29c) {
            ctx->pc = 0x26D2A0u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D2A4u;
    // 0x26d2a4: 0x46031041
    ctx->pc = 0x26d2a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26d2a8: 0x3c014049
    ctx->pc = 0x26d2a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26d2ac: 0x34210fdb
    ctx->pc = 0x26d2acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d2b0: 0x44810000
    ctx->pc = 0x26d2b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d2b4: 0x46010034
    ctx->pc = 0x26d2b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d2b8: 0x0
    ctx->pc = 0x26d2b8u;
    // NOP
    // 0x26d2bc: 0x45000006
    ctx->pc = 0x26D2BCu;
    {
        const bool branch_taken_0x26d2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D2C0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d2bc) {
            ctx->pc = 0x26D2D8u;
            goto label_26d2d8;
        }
    }
    ctx->pc = 0x26D2C4u;
    // 0x26d2c4: 0x3c0140c9
    ctx->pc = 0x26d2c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d2c8: 0x34210fdb
    ctx->pc = 0x26d2c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d2cc: 0x44810000
    ctx->pc = 0x26d2ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d2d0: 0x1000000d
    ctx->pc = 0x26D2D0u;
    {
        const bool branch_taken_0x26d2d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D2D4u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x26d2d0) {
            ctx->pc = 0x26D308u;
            goto label_26d308;
        }
    }
    ctx->pc = 0x26D2D8u;
label_26d2d8:
    // 0x26d2d8: 0xc60100b4
    ctx->pc = 0x26d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d2dc: 0x3c01c049
    ctx->pc = 0x26d2dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x26d2e0: 0x34210fdb
    ctx->pc = 0x26d2e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d2e4: 0x44810000
    ctx->pc = 0x26d2e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d2e8: 0x46000836
    ctx->pc = 0x26d2e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d2ec: 0x0
    ctx->pc = 0x26d2ecu;
    // NOP
    // 0x26d2f0: 0x45020005
    ctx->pc = 0x26D2F0u;
    {
        const bool branch_taken_0x26d2f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d2f0) {
            ctx->pc = 0x26D2F4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D308u;
            goto label_26d308;
        }
    }
    ctx->pc = 0x26D2F8u;
    // 0x26d2f8: 0x3c0140c9
    ctx->pc = 0x26d2f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x26d2fc: 0x34210fdb
    ctx->pc = 0x26d2fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d300: 0x44810000
    ctx->pc = 0x26d300u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d304: 0x46000800
    ctx->pc = 0x26d304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_26d308:
    // 0x26d308: 0x4600a034
    ctx->pc = 0x26d308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d30c: 0x0
    ctx->pc = 0x26d30cu;
    // NOP
    // 0x26d310: 0x4500000d
    ctx->pc = 0x26D310u;
    {
        const bool branch_taken_0x26d310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D314u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d310) {
            ctx->pc = 0x26D348u;
            goto label_26d348;
        }
    }
    ctx->pc = 0x26D318u;
    // 0x26d318: 0x3c020034
    ctx->pc = 0x26d318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d31c: 0xc441f8f4
    ctx->pc = 0x26d31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26d320: 0x46140834
    ctx->pc = 0x26d320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d324: 0x0
    ctx->pc = 0x26d324u;
    // NOP
    // 0x26d328: 0x45030019
    ctx->pc = 0x26D328u;
    {
        const bool branch_taken_0x26d328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d328) {
            ctx->pc = 0x26D32Cu;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D390u;
            goto label_26d390;
        }
    }
    ctx->pc = 0x26D330u;
    // 0x26d330: 0x46010036
    ctx->pc = 0x26d330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d334: 0x0
    ctx->pc = 0x26d334u;
    // NOP
    // 0x26d338: 0x45000018
    ctx->pc = 0x26D338u;
    {
        const bool branch_taken_0x26d338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D33Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26d338) {
            ctx->pc = 0x26D39Cu;
            goto label_26d39c;
        }
    }
    ctx->pc = 0x26D340u;
    // 0x26d340: 0x10000014
    ctx->pc = 0x26D340u;
    {
        const bool branch_taken_0x26d340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D344u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d340) {
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D348u;
label_26d348:
    // 0x26d348: 0x3c020034
    ctx->pc = 0x26d348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26d34c: 0xc442f8f4
    ctx->pc = 0x26d34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26d350: 0xc60300b4
    ctx->pc = 0x26d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26d354: 0x46031041
    ctx->pc = 0x26d354u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x26d358: 0x3c014049
    ctx->pc = 0x26d358u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x26d35c: 0x34210fdb
    ctx->pc = 0x26d35cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x26d360: 0x44810000
    ctx->pc = 0x26d360u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26d364: 0x46000834
    ctx->pc = 0x26d364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d368: 0x0
    ctx->pc = 0x26d368u;
    // NOP
    // 0x26d36c: 0x4502000c
    ctx->pc = 0x26D36Cu;
    {
        const bool branch_taken_0x26d36c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d36c) {
            ctx->pc = 0x26D370u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D3A0u;
            goto label_26d3a0;
        }
    }
    ctx->pc = 0x26D374u;
    // 0x26d374: 0x46021836
    ctx->pc = 0x26d374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d378: 0x0
    ctx->pc = 0x26d378u;
    // NOP
    // 0x26d37c: 0x45020008
    ctx->pc = 0x26D37Cu;
    {
        const bool branch_taken_0x26d37c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d37c) {
            ctx->pc = 0x26D380u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D3A0u;
            goto label_26d3a0;
        }
    }
    ctx->pc = 0x26D384u;
    // 0x26d384: 0x10000003
    ctx->pc = 0x26D384u;
    {
        const bool branch_taken_0x26d384 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x26D388u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
        if (branch_taken_0x26d384) {
            ctx->pc = 0x26D394u;
            goto label_26d394;
        }
    }
    ctx->pc = 0x26D38Cu;
label_26d38c:
    // 0x26d38c: 0xc440f8f4
    ctx->pc = 0x26d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d390:
    // 0x26d390: 0xe60000b4
    ctx->pc = 0x26d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
label_26d394:
    // 0x26d394: 0x3c02003c
    ctx->pc = 0x26d394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d398: 0xac4038e4
    ctx->pc = 0x26d398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14564), GPR_U32(ctx, 0));
label_26d39c:
    // 0x26d39c: 0xc60000b4
    ctx->pc = 0x26d39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d3a0:
    // 0x26d3a0: 0x44800800
    ctx->pc = 0x26d3a0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x26d3a4: 0x46000834
    ctx->pc = 0x26d3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3a8: 0x0
    ctx->pc = 0x26d3a8u;
    // NOP
    // 0x26d3ac: 0x4502000e
    ctx->pc = 0x26D3ACu;
    {
        const bool branch_taken_0x26d3ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d3ac) {
            ctx->pc = 0x26D3B0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x26D3E8u;
            goto label_26d3e8;
        }
    }
    ctx->pc = 0x26D3B4u;
    // 0x26d3b4: 0x3c03003c
    ctx->pc = 0x26d3b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d3b8: 0x24623910
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26d3bc: 0xc4400004
    ctx->pc = 0x26d3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d3c0: 0x46000834
    ctx->pc = 0x26d3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3c4: 0x0
    ctx->pc = 0x26d3c4u;
    // NOP
    // 0x26d3c8: 0x45000005
    ctx->pc = 0x26D3C8u;
    {
        const bool branch_taken_0x26d3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D3CCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x26d3c8) {
            ctx->pc = 0x26D3E0u;
            goto label_26d3e0;
        }
    }
    ctx->pc = 0x26D3D0u;
    // 0x26d3d0: 0x46010034
    ctx->pc = 0x26d3d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3d4: 0x0
    ctx->pc = 0x26d3d4u;
    // NOP
    // 0x26d3d8: 0x45030014
    ctx->pc = 0x26D3D8u;
    {
        const bool branch_taken_0x26d3d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d3d8) {
            ctx->pc = 0x26D3DCu;
            SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
            ctx->pc = 0x26D42Cu;
            goto label_26d42c;
        }
    }
    ctx->pc = 0x26D3E0u;
label_26d3e0:
    // 0x26d3e0: 0xc60000b4
    ctx->pc = 0x26d3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d3e4: 0x44800800
    ctx->pc = 0x26d3e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_26d3e8:
    // 0x26d3e8: 0x46010034
    ctx->pc = 0x26d3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d3ec: 0x0
    ctx->pc = 0x26d3ecu;
    // NOP
    // 0x26d3f0: 0x45000013
    ctx->pc = 0x26D3F0u;
    {
        const bool branch_taken_0x26d3f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D3F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x26d3f0) {
            ctx->pc = 0x26D440u;
            goto label_26d440;
        }
    }
    ctx->pc = 0x26D3F8u;
    // 0x26d3f8: 0x3c03003c
    ctx->pc = 0x26d3f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26d3fc: 0x24623910
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 14608));
    // 0x26d400: 0xc4400004
    ctx->pc = 0x26d400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d404: 0x46010034
    ctx->pc = 0x26d404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d408: 0x0
    ctx->pc = 0x26d408u;
    // NOP
    // 0x26d40c: 0x4502000d
    ctx->pc = 0x26D40Cu;
    {
        const bool branch_taken_0x26d40c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d40c) {
            ctx->pc = 0x26D410u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26D444u;
            goto label_26d444;
        }
    }
    ctx->pc = 0x26D414u;
    // 0x26d414: 0xc4603910
    ctx->pc = 0x26d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 14608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d418: 0x46000834
    ctx->pc = 0x26d418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26d41c: 0x0
    ctx->pc = 0x26d41cu;
    // NOP
    // 0x26d420: 0x45020008
    ctx->pc = 0x26D420u;
    {
        const bool branch_taken_0x26d420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d420) {
            ctx->pc = 0x26D424u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x26D444u;
            goto label_26d444;
        }
    }
    ctx->pc = 0x26D428u;
    // 0x26d428: 0x3c020034
    ctx->pc = 0x26d428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26d42c:
    // 0x26d42c: 0xc440f8f4
    ctx->pc = 0x26d42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d430: 0xe60000b4
    ctx->pc = 0x26d430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x26d434: 0x3c02003c
    ctx->pc = 0x26d434u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26d438: 0xac4038e4
    ctx->pc = 0x26d438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14564), GPR_U32(ctx, 0));
    // 0x26d43c: 0xdfbf0010
    ctx->pc = 0x26d43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26d440:
    // 0x26d440: 0xdfb00000
    ctx->pc = 0x26d440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d444:
    // 0x26d444: 0xc7b40020
    ctx->pc = 0x26d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26d448: 0x3e00008
    ctx->pc = 0x26D448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D44Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D148u: goto label_26d148;
            case 0x26D168u: goto label_26d168;
            case 0x26D1C8u: goto label_26d1c8;
            case 0x26D1F8u: goto label_26d1f8;
            case 0x26D238u: goto label_26d238;
            case 0x26D27Cu: goto label_26d27c;
            case 0x26D280u: goto label_26d280;
            case 0x26D2D8u: goto label_26d2d8;
            case 0x26D308u: goto label_26d308;
            case 0x26D348u: goto label_26d348;
            case 0x26D38Cu: goto label_26d38c;
            case 0x26D390u: goto label_26d390;
            case 0x26D394u: goto label_26d394;
            case 0x26D39Cu: goto label_26d39c;
            case 0x26D3A0u: goto label_26d3a0;
            case 0x26D3E0u: goto label_26d3e0;
            case 0x26D3E8u: goto label_26d3e8;
            case 0x26D42Cu: goto label_26d42c;
            case 0x26D440u: goto label_26d440;
            case 0x26D444u: goto label_26d444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D450u;
}
