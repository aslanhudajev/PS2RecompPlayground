#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mod_objpos
// Address: 0x217018 - 0x217308
void mod_objpos_0x217018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x217018u;

    // 0x217018: 0x27bdffb0
    ctx->pc = 0x217018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21701c: 0xffbf0030
    ctx->pc = 0x21701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x217020: 0xffb20020
    ctx->pc = 0x217020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x217024: 0xffb10010
    ctx->pc = 0x217024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x217028: 0xffb00000
    ctx->pc = 0x217028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21702c: 0xe7b40040
    ctx->pc = 0x21702cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x217030: 0x3c020031
    ctx->pc = 0x217030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x217034: 0x8c421b24
    ctx->pc = 0x217034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6948)));
    // 0x217038: 0x10400007
    ctx->pc = 0x217038u;
    {
        const bool branch_taken_0x217038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21703Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x217038) {
            ctx->pc = 0x217058u;
            goto label_217058;
        }
    }
    ctx->pc = 0x217040u;
    // 0x217040: 0xc440f8d8
    ctx->pc = 0x217040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217044: 0x3c013d4c
    ctx->pc = 0x217044u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x217048: 0x3421cccd
    ctx->pc = 0x217048u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x21704c: 0x44810800
    ctx->pc = 0x21704cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x217050: 0x10000003
    ctx->pc = 0x217050u;
    {
        const bool branch_taken_0x217050 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217054u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x217050) {
            ctx->pc = 0x217060u;
            goto label_217060;
        }
    }
    ctx->pc = 0x217058u;
label_217058:
    // 0x217058: 0x3c013f80
    ctx->pc = 0x217058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x21705c: 0x44810000
    ctx->pc = 0x21705cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_217060:
    // 0x217060: 0xe440f8d8
    ctx->pc = 0x217060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965464), bits); }
    // 0x217064: 0x3c02003c
    ctx->pc = 0x217064u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217068: 0x8c42cf0c
    ctx->pc = 0x217068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954764)));
    // 0x21706c: 0x3c030004
    ctx->pc = 0x21706cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x217070: 0x431024
    ctx->pc = 0x217070u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x217074: 0x10400010
    ctx->pc = 0x217074u;
    {
        const bool branch_taken_0x217074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x217078u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x217074) {
            ctx->pc = 0x2170B8u;
            goto label_2170b8;
        }
    }
    ctx->pc = 0x21707Cu;
    // 0x21707c: 0x2443d090
    ctx->pc = 0x21707cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294955152));
    // 0x217080: 0xac40d090
    ctx->pc = 0x217080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955152), GPR_U32(ctx, 0));
    // 0x217084: 0xac600004
    ctx->pc = 0x217084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x217088: 0xac600008
    ctx->pc = 0x217088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x21708c: 0x3c03003c
    ctx->pc = 0x21708cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x217090: 0x2465d0a0
    ctx->pc = 0x217090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294955168));
    // 0x217094: 0x3c020032
    ctx->pc = 0x217094u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x217098: 0x2444f880
    ctx->pc = 0x217098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294965376));
    // 0x21709c: 0xc440f880
    ctx->pc = 0x21709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170a0: 0xe460d0a0
    ctx->pc = 0x2170a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955168), bits); }
    // 0x2170a4: 0xc4800004
    ctx->pc = 0x2170a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170a8: 0xe4a00004
    ctx->pc = 0x2170a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2170ac: 0xc4800008
    ctx->pc = 0x2170acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170b0: 0x1000008e
    ctx->pc = 0x2170B0u;
    {
        const bool branch_taken_0x2170b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2170B4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        if (branch_taken_0x2170b0) {
            ctx->pc = 0x2172ECu;
            goto label_2172ec;
        }
    }
    ctx->pc = 0x2170B8u;
label_2170b8:
    // 0x2170b8: 0x3c020032
    ctx->pc = 0x2170b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2170bc: 0xc441f8d8
    ctx->pc = 0x2170bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2170c0: 0x3c013c8e
    ctx->pc = 0x2170c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15502 << 16));
    // 0x2170c4: 0x3421fa36
    ctx->pc = 0x2170c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x2170c8: 0x44810000
    ctx->pc = 0x2170c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2170cc: 0x46000d02
    ctx->pc = 0x2170ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2170d0: 0x3c013e32
    ctx->pc = 0x2170d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15922 << 16));
    // 0x2170d4: 0x3421b8c3
    ctx->pc = 0x2170d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2170d8: 0x44810000
    ctx->pc = 0x2170d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2170dc: 0x46140034
    ctx->pc = 0x2170dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2170e0: 0x0
    ctx->pc = 0x2170e0u;
    // NOP
    // 0x2170e4: 0x45030001
    ctx->pc = 0x2170E4u;
    {
        const bool branch_taken_0x2170e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2170e4) {
            ctx->pc = 0x2170E8u;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x2170ECu;
            goto label_2170ec;
        }
    }
    ctx->pc = 0x2170ECu;
label_2170ec:
    // 0x2170ec: 0x3c10003c
    ctx->pc = 0x2170ecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2170f0: 0x2611d090
    ctx->pc = 0x2170f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294955152));
    // 0x2170f4: 0x24040001
    ctx->pc = 0x2170f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2170f8: 0x24050001
    ctx->pc = 0x2170f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2170fc: 0xc60cd090
    ctx->pc = 0x2170fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217100: 0x3c01c0c9
    ctx->pc = 0x217100u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49353 << 16));
    // 0x217104: 0x34210fdb
    ctx->pc = 0x217104u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217108: 0x44817000
    ctx->pc = 0x217108u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x21710c: 0x3c0140c9
    ctx->pc = 0x21710cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x217110: 0x34210fdb
    ctx->pc = 0x217110u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217114: 0x44817800
    ctx->pc = 0x217114u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x217118: 0xc085a28
    ctx->pc = 0x217118u;
    SET_GPR_U32(ctx, 31, 0x217120u);
    ctx->pc = 0x21711Cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[20]);
    ctx->pc = 0x2168A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModFP_0x2168a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217120u; }
    }
    if (ctx->pc != 0x217120u) { return; }
    ctx->pc = 0x217120u;
    // 0x217120: 0x46000046
    ctx->pc = 0x217120u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x217124: 0x3c014049
    ctx->pc = 0x217124u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x217128: 0x34210fdb
    ctx->pc = 0x217128u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x21712c: 0x44810000
    ctx->pc = 0x21712cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x217130: 0x46010034
    ctx->pc = 0x217130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217134: 0x0
    ctx->pc = 0x217134u;
    // NOP
    // 0x217138: 0x45000006
    ctx->pc = 0x217138u;
    {
        const bool branch_taken_0x217138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21713Cu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294955152), bits); }
        if (branch_taken_0x217138) {
            ctx->pc = 0x217154u;
            goto label_217154;
        }
    }
    ctx->pc = 0x217140u;
    // 0x217140: 0x3c0140c9
    ctx->pc = 0x217140u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x217144: 0x34210fdb
    ctx->pc = 0x217144u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217148: 0x44810000
    ctx->pc = 0x217148u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21714c: 0x1000000e
    ctx->pc = 0x21714Cu;
    {
        const bool branch_taken_0x21714c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x217150u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x21714c) {
            ctx->pc = 0x217188u;
            goto label_217188;
        }
    }
    ctx->pc = 0x217154u;
label_217154:
    // 0x217154: 0x3c02003c
    ctx->pc = 0x217154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x217158: 0xc441d090
    ctx->pc = 0x217158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21715c: 0x3c01c049
    ctx->pc = 0x21715cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x217160: 0x34210fdb
    ctx->pc = 0x217160u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217164: 0x44810000
    ctx->pc = 0x217164u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x217168: 0x46000836
    ctx->pc = 0x217168u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21716c: 0x0
    ctx->pc = 0x21716cu;
    // NOP
    // 0x217170: 0x45020005
    ctx->pc = 0x217170u;
    {
        const bool branch_taken_0x217170 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217170) {
            ctx->pc = 0x217174u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x217188u;
            goto label_217188;
        }
    }
    ctx->pc = 0x217178u;
    // 0x217178: 0x3c0140c9
    ctx->pc = 0x217178u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x21717c: 0x34210fdb
    ctx->pc = 0x21717cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217180: 0x44810000
    ctx->pc = 0x217180u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x217184: 0x46000800
    ctx->pc = 0x217184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_217188:
    // 0x217188: 0xe6200000
    ctx->pc = 0x217188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21718c: 0x3c10003c
    ctx->pc = 0x21718cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217190: 0x2610d090
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294955152));
    // 0x217194: 0x202d
    ctx->pc = 0x217194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217198: 0x24050001
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21719c: 0xc60c0004
    ctx->pc = 0x21719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2171a0: 0x3c01c0c9
    ctx->pc = 0x2171a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49353 << 16));
    // 0x2171a4: 0x34210fdb
    ctx->pc = 0x2171a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2171a8: 0x44817000
    ctx->pc = 0x2171a8u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2171ac: 0x3c0140c9
    ctx->pc = 0x2171acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2171b0: 0x34210fdb
    ctx->pc = 0x2171b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2171b4: 0x44817800
    ctx->pc = 0x2171b4u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2171b8: 0xc085a28
    ctx->pc = 0x2171B8u;
    SET_GPR_U32(ctx, 31, 0x2171C0u);
    ctx->pc = 0x2171BCu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2168A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModFP_0x2168a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2171C0u; }
    }
    if (ctx->pc != 0x2171C0u) { return; }
    ctx->pc = 0x2171C0u;
    // 0x2171c0: 0x46000046
    ctx->pc = 0x2171c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2171c4: 0x3c014049
    ctx->pc = 0x2171c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2171c8: 0x34210fdb
    ctx->pc = 0x2171c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2171cc: 0x44810000
    ctx->pc = 0x2171ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2171d0: 0x46010034
    ctx->pc = 0x2171d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2171d4: 0x0
    ctx->pc = 0x2171d4u;
    // NOP
    // 0x2171d8: 0x45000006
    ctx->pc = 0x2171D8u;
    {
        const bool branch_taken_0x2171d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2171DCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x2171d8) {
            ctx->pc = 0x2171F4u;
            goto label_2171f4;
        }
    }
    ctx->pc = 0x2171E0u;
    // 0x2171e0: 0x3c0140c9
    ctx->pc = 0x2171e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2171e4: 0x34210fdb
    ctx->pc = 0x2171e4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2171e8: 0x44810000
    ctx->pc = 0x2171e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2171ec: 0x1000000e
    ctx->pc = 0x2171ECu;
    {
        const bool branch_taken_0x2171ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2171F0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2171ec) {
            ctx->pc = 0x217228u;
            goto label_217228;
        }
    }
    ctx->pc = 0x2171F4u;
label_2171f4:
    // 0x2171f4: 0x3c02003c
    ctx->pc = 0x2171f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2171f8: 0xc441d094
    ctx->pc = 0x2171f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2171fc: 0x3c01c049
    ctx->pc = 0x2171fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x217200: 0x34210fdb
    ctx->pc = 0x217200u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217204: 0x44810000
    ctx->pc = 0x217204u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x217208: 0x46000836
    ctx->pc = 0x217208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21720c: 0x0
    ctx->pc = 0x21720cu;
    // NOP
    // 0x217210: 0x45020005
    ctx->pc = 0x217210u;
    {
        const bool branch_taken_0x217210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217210) {
            ctx->pc = 0x217214u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x217228u;
            goto label_217228;
        }
    }
    ctx->pc = 0x217218u;
    // 0x217218: 0x3c0140c9
    ctx->pc = 0x217218u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x21721c: 0x34210fdb
    ctx->pc = 0x21721cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x217220: 0x44810000
    ctx->pc = 0x217220u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x217224: 0x46000800
    ctx->pc = 0x217224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_217228:
    // 0x217228: 0xe6000004
    ctx->pc = 0x217228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21722c: 0x3c10003c
    ctx->pc = 0x21722cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x217230: 0x2612d0a0
    ctx->pc = 0x217230u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4294955168));
    // 0x217234: 0x3c110032
    ctx->pc = 0x217234u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x217238: 0xc620f8d8
    ctx->pc = 0x217238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294965464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21723c: 0x3c01bdcc
    ctx->pc = 0x21723cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48588 << 16));
    // 0x217240: 0x3421cccd
    ctx->pc = 0x217240u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x217244: 0x44816800
    ctx->pc = 0x217244u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x217248: 0x24040003
    ctx->pc = 0x217248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21724c: 0x24050001
    ctx->pc = 0x21724cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217250: 0xc60cd0a0
    ctx->pc = 0x217250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217254: 0x3c01c61c
    ctx->pc = 0x217254u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50716 << 16));
    // 0x217258: 0x34214000
    ctx->pc = 0x217258u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x21725c: 0x44817000
    ctx->pc = 0x21725cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x217260: 0x3c01461c
    ctx->pc = 0x217260u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x217264: 0x34214000
    ctx->pc = 0x217264u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x217268: 0x44817800
    ctx->pc = 0x217268u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x21726c: 0xc085a28
    ctx->pc = 0x21726Cu;
    SET_GPR_U32(ctx, 31, 0x217274u);
    ctx->pc = 0x217270u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    ctx->pc = 0x2168A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModFP_0x2168a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217274u; }
    }
    if (ctx->pc != 0x217274u) { return; }
    ctx->pc = 0x217274u;
    // 0x217274: 0xe600d0a0
    ctx->pc = 0x217274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294955168), bits); }
    // 0x217278: 0xc62df8d8
    ctx->pc = 0x217278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294965464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21727c: 0x3c013dcc
    ctx->pc = 0x21727cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x217280: 0x3421cccd
    ctx->pc = 0x217280u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x217284: 0x4481a000
    ctx->pc = 0x217284u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x217288: 0x24040004
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x21728c: 0x24050001
    ctx->pc = 0x21728cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x217290: 0xc64c0004
    ctx->pc = 0x217290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x217294: 0x3c01c61c
    ctx->pc = 0x217294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50716 << 16));
    // 0x217298: 0x34214000
    ctx->pc = 0x217298u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x21729c: 0x44817000
    ctx->pc = 0x21729cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2172a0: 0x3c01461c
    ctx->pc = 0x2172a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2172a4: 0x34214000
    ctx->pc = 0x2172a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2172a8: 0x44817800
    ctx->pc = 0x2172a8u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2172ac: 0xc085a28
    ctx->pc = 0x2172ACu;
    SET_GPR_U32(ctx, 31, 0x2172B4u);
    ctx->pc = 0x2172B0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    ctx->pc = 0x2168A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModFP_0x2168a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172B4u; }
    }
    if (ctx->pc != 0x2172B4u) { return; }
    ctx->pc = 0x2172B4u;
    // 0x2172b4: 0xe6400004
    ctx->pc = 0x2172b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2172b8: 0xc62df8d8
    ctx->pc = 0x2172b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294965464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2172bc: 0x24040002
    ctx->pc = 0x2172bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2172c0: 0x24050001
    ctx->pc = 0x2172c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2172c4: 0xc64c0008
    ctx->pc = 0x2172c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2172c8: 0x3c01c61c
    ctx->pc = 0x2172c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50716 << 16));
    // 0x2172cc: 0x34214000
    ctx->pc = 0x2172ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2172d0: 0x44817000
    ctx->pc = 0x2172d0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2172d4: 0x3c01461c
    ctx->pc = 0x2172d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
    // 0x2172d8: 0x34214000
    ctx->pc = 0x2172d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 16384));
    // 0x2172dc: 0x44817800
    ctx->pc = 0x2172dcu;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 1);
    // 0x2172e0: 0xc085a28
    ctx->pc = 0x2172E0u;
    SET_GPR_U32(ctx, 31, 0x2172E8u);
    ctx->pc = 0x2172E4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    ctx->pc = 0x2168A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuModFP_0x2168a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2172E8u; }
    }
    if (ctx->pc != 0x2172E8u) { return; }
    ctx->pc = 0x2172E8u;
    // 0x2172e8: 0xe6400008
    ctx->pc = 0x2172e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2172ec:
    // 0x2172ec: 0xdfbf0030
    ctx->pc = 0x2172ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2172f0: 0xdfb20020
    ctx->pc = 0x2172f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2172f4: 0xdfb10010
    ctx->pc = 0x2172f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172f8: 0xdfb00000
    ctx->pc = 0x2172f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2172fc: 0xc7b40040
    ctx->pc = 0x2172fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217300: 0x3e00008
    ctx->pc = 0x217300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217058u: goto label_217058;
            case 0x217060u: goto label_217060;
            case 0x2170B8u: goto label_2170b8;
            case 0x2170ECu: goto label_2170ec;
            case 0x217154u: goto label_217154;
            case 0x217188u: goto label_217188;
            case 0x2171F4u: goto label_2171f4;
            case 0x217228u: goto label_217228;
            case 0x2172ECu: goto label_2172ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217308u;
}
