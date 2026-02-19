#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioQueUpdate
// Address: 0x222b58 - 0x222df4
void AudioQueUpdate_0x222b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222b58u;

    // 0x222b58: 0x27bdff80
    ctx->pc = 0x222b58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x222b5c: 0xffbf0070
    ctx->pc = 0x222b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x222b60: 0xffb60060
    ctx->pc = 0x222b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x222b64: 0xffb50050
    ctx->pc = 0x222b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x222b68: 0xffb40040
    ctx->pc = 0x222b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x222b6c: 0xffb30030
    ctx->pc = 0x222b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x222b70: 0xffb20020
    ctx->pc = 0x222b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x222b74: 0xffb10010
    ctx->pc = 0x222b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x222b78: 0xffb00000
    ctx->pc = 0x222b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222b7c: 0x3c020032
    ctx->pc = 0x222b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222b80: 0x8c42fd58
    ctx->pc = 0x222b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x222b84: 0x10400003
    ctx->pc = 0x222B84u;
    {
        const bool branch_taken_0x222b84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B88u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222b84) {
            ctx->pc = 0x222B94u;
            goto label_222b94;
        }
    }
    ctx->pc = 0x222B8Cu;
    // 0x222b8c: 0x1000008f
    ctx->pc = 0x222B8Cu;
    {
        const bool branch_taken_0x222b8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222B90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222b8c) {
            ctx->pc = 0x222DCCu;
            goto label_222dcc;
        }
    }
    ctx->pc = 0x222B94u;
label_222b94:
    // 0x222b94: 0x3c020032
    ctx->pc = 0x222b94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222b98: 0x8c42fe2c
    ctx->pc = 0x222b98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x222b9c: 0x1440008b
    ctx->pc = 0x222B9Cu;
    {
        const bool branch_taken_0x222b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222BA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222b9c) {
            ctx->pc = 0x222DCCu;
            goto label_222dcc;
        }
    }
    ctx->pc = 0x222BA4u;
    // 0x222ba4: 0x3c020032
    ctx->pc = 0x222ba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222ba8: 0x8c42fe30
    ctx->pc = 0x222ba8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966832)));
    // 0x222bac: 0x14400087
    ctx->pc = 0x222BACu;
    {
        const bool branch_taken_0x222bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222BB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222bac) {
            ctx->pc = 0x222DCCu;
            goto label_222dcc;
        }
    }
    ctx->pc = 0x222BB4u;
    // 0x222bb4: 0x802d
    ctx->pc = 0x222bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bb8: 0x3c02003c
    ctx->pc = 0x222bb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222bbc: 0x245207b8
    ctx->pc = 0x222bbcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x222bc0: 0x3c02003c
    ctx->pc = 0x222bc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222bc4: 0x245107b0
    ctx->pc = 0x222bc4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 1968));
    // 0x222bc8: 0x3c16003c
    ctx->pc = 0x222bc8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)60 << 16));
    // 0x222bcc: 0x24130140
    ctx->pc = 0x222bccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 320));
    // 0x222bd0: 0x3c02003c
    ctx->pc = 0x222bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222bd4: 0x245507d8
    ctx->pc = 0x222bd4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 2008));
    // 0x222bd8: 0x101880
    ctx->pc = 0x222bd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x222bdc: 0x0
    ctx->pc = 0x222bdcu;
    // NOP
label_222be0:
    // 0x222be0: 0x721021
    ctx->pc = 0x222be0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x222be4: 0x8c420000
    ctx->pc = 0x222be4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222be8: 0x18400073
    ctx->pc = 0x222BE8u;
    {
        const bool branch_taken_0x222be8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x222BECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        if (branch_taken_0x222be8) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222BF0u;
    // 0x222bf0: 0x44800800
    ctx->pc = 0x222bf0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x222bf4: 0xc4400000
    ctx->pc = 0x222bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222bf8: 0x46010032
    ctx->pc = 0x222bf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222bfc: 0x0
    ctx->pc = 0x222bfcu;
    // NOP
    // 0x222c00: 0x45000029
    ctx->pc = 0x222C00u;
    {
        const bool branch_taken_0x222c00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222C04u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x222c00) {
            ctx->pc = 0x222CA8u;
            goto label_222ca8;
        }
    }
    ctx->pc = 0x222C08u;
    // 0x222c08: 0x26c407c8
    ctx->pc = 0x222c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 1992));
    // 0x222c0c: 0x2134818
    ctx->pc = 0x222c0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222c10: 0x1241021
    ctx->pc = 0x222c10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x222c14: 0x8c450000
    ctx->pc = 0x222c14u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222c18: 0x4a00009
    ctx->pc = 0x222C18u;
    {
        const bool branch_taken_0x222c18 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x222C1Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        if (branch_taken_0x222c18) {
            ctx->pc = 0x222C40u;
            goto label_222c40;
        }
    }
    ctx->pc = 0x222C20u;
    // 0x222c20: 0x40182d
    ctx->pc = 0x222c20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c24: 0x40482d
    ctx->pc = 0x222c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c28: 0x2404ffff
    ctx->pc = 0x222c28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222c2c: 0x8c460004
    ctx->pc = 0x222c2cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x222c30: 0x382d
    ctx->pc = 0x222c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c34: 0x8c680008
    ctx->pc = 0x222c34u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x222c38: 0xc088958
    ctx->pc = 0x222C38u;
    SET_GPR_U32(ctx, 31, 0x222C40u);
    ctx->pc = 0x222C3Cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222C40u; }
    }
    if (ctx->pc != 0x222C40u) { return; }
    ctx->pc = 0x222C40u;
label_222c40:
    // 0x222c40: 0x101080
    ctx->pc = 0x222c40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x222c44: 0x512821
    ctx->pc = 0x222c44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x222c48: 0x3c03003a
    ctx->pc = 0x222c48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x222c4c: 0x246422f8
    ctx->pc = 0x222c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x222c50: 0x8c6222f8
    ctx->pc = 0x222c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222c54: 0x4400006
    ctx->pc = 0x222C54u;
    {
        const bool branch_taken_0x222c54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x222c54) {
            ctx->pc = 0x222C70u;
            goto label_222c70;
        }
    }
    ctx->pc = 0x222C5Cu;
    // 0x222c5c: 0x8c6222f8
    ctx->pc = 0x222c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222c60: 0x44820800
    ctx->pc = 0x222c60u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x222c64: 0x46800860
    ctx->pc = 0x222c64u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222c68: 0x1000000a
    ctx->pc = 0x222C68u;
    {
        const bool branch_taken_0x222c68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222C6Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x222c68) {
            ctx->pc = 0x222C94u;
            goto label_222c94;
        }
    }
    ctx->pc = 0x222C70u;
label_222c70:
    // 0x222c70: 0x8c830000
    ctx->pc = 0x222c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222c74: 0x30630001
    ctx->pc = 0x222c74u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x222c78: 0x8c820000
    ctx->pc = 0x222c78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222c7c: 0x21042
    ctx->pc = 0x222c7cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x222c80: 0x621825
    ctx->pc = 0x222c80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222c84: 0x44830800
    ctx->pc = 0x222c84u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x222c88: 0x46800860
    ctx->pc = 0x222c88u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222c8c: 0x46010840
    ctx->pc = 0x222c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x222c90: 0x2131818
    ctx->pc = 0x222c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_222c94:
    // 0x222c94: 0x751021
    ctx->pc = 0x222c94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x222c98: 0xc4400000
    ctx->pc = 0x222c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222c9c: 0x46000800
    ctx->pc = 0x222c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x222ca0: 0x10000045
    ctx->pc = 0x222CA0u;
    {
        const bool branch_taken_0x222ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222CA4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        if (branch_taken_0x222ca0) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222CA8u;
label_222ca8:
    // 0x222ca8: 0x3c03003a
    ctx->pc = 0x222ca8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x222cac: 0x246422f8
    ctx->pc = 0x222cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8952));
    // 0x222cb0: 0x8c6222f8
    ctx->pc = 0x222cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222cb4: 0x4400006
    ctx->pc = 0x222CB4u;
    {
        const bool branch_taken_0x222cb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x222cb4) {
            ctx->pc = 0x222CD0u;
            goto label_222cd0;
        }
    }
    ctx->pc = 0x222CBCu;
    // 0x222cbc: 0x8c6222f8
    ctx->pc = 0x222cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x222cc0: 0x44820800
    ctx->pc = 0x222cc0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x222cc4: 0x46800860
    ctx->pc = 0x222cc4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222cc8: 0x1000000a
    ctx->pc = 0x222CC8u;
    {
        const bool branch_taken_0x222cc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x222CCCu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x222cc8) {
            ctx->pc = 0x222CF4u;
            goto label_222cf4;
        }
    }
    ctx->pc = 0x222CD0u;
label_222cd0:
    // 0x222cd0: 0x8c830000
    ctx->pc = 0x222cd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222cd4: 0x30630001
    ctx->pc = 0x222cd4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x222cd8: 0x8c820000
    ctx->pc = 0x222cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222cdc: 0x21042
    ctx->pc = 0x222cdcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x222ce0: 0x621825
    ctx->pc = 0x222ce0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x222ce4: 0x44830800
    ctx->pc = 0x222ce4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x222ce8: 0x46800860
    ctx->pc = 0x222ce8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x222cec: 0x46010840
    ctx->pc = 0x222cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x222cf0: 0x101880
    ctx->pc = 0x222cf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
label_222cf4:
    // 0x222cf4: 0x711021
    ctx->pc = 0x222cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222cf8: 0xc4400000
    ctx->pc = 0x222cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x222cfc: 0x46010036
    ctx->pc = 0x222cfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x222d00: 0x0
    ctx->pc = 0x222d00u;
    // NOP
    // 0x222d04: 0x4500002c
    ctx->pc = 0x222D04u;
    {
        const bool branch_taken_0x222d04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x222D08u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x222d04) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222D0Cu;
    // 0x222d0c: 0x24040001
    ctx->pc = 0x222d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x222d10: 0x721021
    ctx->pc = 0x222d10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x222d14: 0x8c420000
    ctx->pc = 0x222d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222d18: 0x82102a
    ctx->pc = 0x222d18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x222d1c: 0x1040001f
    ctx->pc = 0x222D1Cu;
    {
        const bool branch_taken_0x222d1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x222D20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x222d1c) {
            ctx->pc = 0x222D9Cu;
            goto label_222d9c;
        }
    }
    ctx->pc = 0x222D24u;
    // 0x222d24: 0x244707c8
    ctx->pc = 0x222d24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1992));
    // 0x222d28: 0x24060014
    ctx->pc = 0x222d28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 20));
    // 0x222d2c: 0x24020140
    ctx->pc = 0x222d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x222d30: 0x2026018
    ctx->pc = 0x222d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222d34: 0x3c02003c
    ctx->pc = 0x222d34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222d38: 0x244207b8
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x222d3c: 0xa22821
    ctx->pc = 0x222d3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x222d40: 0x2482ffff
    ctx->pc = 0x222d40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x222d44: 0x0
    ctx->pc = 0x222d44u;
    // NOP
label_222d48:
    // 0x222d48: 0x461818
    ctx->pc = 0x222d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222d4c: 0x6c1021
    ctx->pc = 0x222d4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x222d50: 0x471021
    ctx->pc = 0x222d50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x222d54: 0x864018
    ctx->pc = 0x222d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222d58: 0x10c1821
    ctx->pc = 0x222d58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x222d5c: 0x671821
    ctx->pc = 0x222d5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x222d60: 0x68690007
    ctx->pc = 0x222d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x222d64: 0x6c690000
    ctx->pc = 0x222d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x222d68: 0x686a000f
    ctx->pc = 0x222d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x222d6c: 0x6c6a0008
    ctx->pc = 0x222d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x222d70: 0x8c6b0010
    ctx->pc = 0x222d70u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x222d74: 0xb0490007
    ctx->pc = 0x222d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d78: 0xb4490000
    ctx->pc = 0x222d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 9) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d7c: 0xb04a000f
    ctx->pc = 0x222d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d80: 0xb44a0008
    ctx->pc = 0x222d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 10) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x222d84: 0xac4b0010
    ctx->pc = 0x222d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x222d88: 0x24840001
    ctx->pc = 0x222d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x222d8c: 0x8ca20000
    ctx->pc = 0x222d8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222d90: 0x82102a
    ctx->pc = 0x222d90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x222d94: 0x1440ffec
    ctx->pc = 0x222D94u;
    {
        const bool branch_taken_0x222d94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222D98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x222d94) {
            ctx->pc = 0x222D48u;
            goto label_222d48;
        }
    }
    ctx->pc = 0x222D9Cu;
label_222d9c:
    // 0x222d9c: 0x101880
    ctx->pc = 0x222d9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x222da0: 0x711021
    ctx->pc = 0x222da0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222da4: 0xac400000
    ctx->pc = 0x222da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x222da8: 0x721821
    ctx->pc = 0x222da8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x222dac: 0x8c620000
    ctx->pc = 0x222dacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222db0: 0x2442ffff
    ctx->pc = 0x222db0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x222db4: 0xac620000
    ctx->pc = 0x222db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_222db8:
    // 0x222db8: 0x26100001
    ctx->pc = 0x222db8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x222dbc: 0x2a020002
    ctx->pc = 0x222dbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x222dc0: 0x1440ff87
    ctx->pc = 0x222DC0u;
    {
        const bool branch_taken_0x222dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x222DC4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x222dc0) {
            ctx->pc = 0x222BE0u;
            goto label_222be0;
        }
    }
    ctx->pc = 0x222DC8u;
    // 0x222dc8: 0x280102d
    ctx->pc = 0x222dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_222dcc:
    // 0x222dcc: 0xdfbf0070
    ctx->pc = 0x222dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222dd0: 0xdfb60060
    ctx->pc = 0x222dd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x222dd4: 0xdfb50050
    ctx->pc = 0x222dd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x222dd8: 0xdfb40040
    ctx->pc = 0x222dd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222ddc: 0xdfb30030
    ctx->pc = 0x222ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222de0: 0xdfb20020
    ctx->pc = 0x222de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222de4: 0xdfb10010
    ctx->pc = 0x222de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222de8: 0xdfb00000
    ctx->pc = 0x222de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222dec: 0x3e00008
    ctx->pc = 0x222DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222DF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222B94u: goto label_222b94;
            case 0x222BE0u: goto label_222be0;
            case 0x222C40u: goto label_222c40;
            case 0x222C70u: goto label_222c70;
            case 0x222C94u: goto label_222c94;
            case 0x222CA8u: goto label_222ca8;
            case 0x222CD0u: goto label_222cd0;
            case 0x222CF4u: goto label_222cf4;
            case 0x222D48u: goto label_222d48;
            case 0x222D9Cu: goto label_222d9c;
            case 0x222DB8u: goto label_222db8;
            case 0x222DCCu: goto label_222dcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222DF4u;
}
