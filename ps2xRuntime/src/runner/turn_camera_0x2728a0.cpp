#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: turn_camera
// Address: 0x2728a0 - 0x272a68
void turn_camera_0x2728a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2728a0u;

    // 0x2728a0: 0x460c6881
    ctx->pc = 0x2728a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2728a4: 0x3c014049
    ctx->pc = 0x2728a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2728a8: 0x34210fdb
    ctx->pc = 0x2728a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2728ac: 0x44810000
    ctx->pc = 0x2728acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2728b0: 0x46020034
    ctx->pc = 0x2728b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2728b4: 0x0
    ctx->pc = 0x2728b4u;
    // NOP
    // 0x2728b8: 0x45000006
    ctx->pc = 0x2728B8u;
    {
        const bool branch_taken_0x2728b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2728BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2728b8) {
            ctx->pc = 0x2728D4u;
            goto label_2728d4;
        }
    }
    ctx->pc = 0x2728C0u;
    // 0x2728c0: 0x3c0140c9
    ctx->pc = 0x2728c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2728c4: 0x34210fdb
    ctx->pc = 0x2728c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2728c8: 0x44810000
    ctx->pc = 0x2728c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2728cc: 0x1000000c
    ctx->pc = 0x2728CCu;
    {
        const bool branch_taken_0x2728cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2728D0u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2728cc) {
            ctx->pc = 0x272900u;
            goto label_272900;
        }
    }
    ctx->pc = 0x2728D4u;
label_2728d4:
    // 0x2728d4: 0x3c01c049
    ctx->pc = 0x2728d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x2728d8: 0x34210fdb
    ctx->pc = 0x2728d8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2728dc: 0x44810000
    ctx->pc = 0x2728dcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2728e0: 0x46001036
    ctx->pc = 0x2728e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2728e4: 0x0
    ctx->pc = 0x2728e4u;
    // NOP
    // 0x2728e8: 0x45020005
    ctx->pc = 0x2728E8u;
    {
        const bool branch_taken_0x2728e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2728e8) {
            ctx->pc = 0x2728ECu;
            ctx->f[0] = FPU_MOV_S(ctx->f[2]);
            ctx->pc = 0x272900u;
            goto label_272900;
        }
    }
    ctx->pc = 0x2728F0u;
    // 0x2728f0: 0x3c0140c9
    ctx->pc = 0x2728f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2728f4: 0x34210fdb
    ctx->pc = 0x2728f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2728f8: 0x44810000
    ctx->pc = 0x2728f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2728fc: 0x46001000
    ctx->pc = 0x2728fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_272900:
    // 0x272900: 0x3c020032
    ctx->pc = 0x272900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x272904: 0x8c42080c
    ctx->pc = 0x272904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x272908: 0x14400015
    ctx->pc = 0x272908u;
    {
        const bool branch_taken_0x272908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27290Cu;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x272908) {
            ctx->pc = 0x272960u;
            goto label_272960;
        }
    }
    ctx->pc = 0x272910u;
    // 0x272910: 0x3c030031
    ctx->pc = 0x272910u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x272914: 0x8c62ffbc
    ctx->pc = 0x272914u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x272918: 0x4400005
    ctx->pc = 0x272918u;
    {
        const bool branch_taken_0x272918 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27291Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x272918) {
            ctx->pc = 0x272930u;
            goto label_272930;
        }
    }
    ctx->pc = 0x272920u;
    // 0x272920: 0x44820800
    ctx->pc = 0x272920u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x272924: 0x46800860
    ctx->pc = 0x272924u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272928: 0x10000008
    ctx->pc = 0x272928u;
    {
        const bool branch_taken_0x272928 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x272928) {
            ctx->pc = 0x27294Cu;
            goto label_27294c;
        }
    }
    ctx->pc = 0x272930u;
label_272930:
    // 0x272930: 0x8c820000
    ctx->pc = 0x272930u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272934: 0x30430001
    ctx->pc = 0x272934u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x272938: 0x21042
    ctx->pc = 0x272938u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x27293c: 0x621825
    ctx->pc = 0x27293cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272940: 0x44830800
    ctx->pc = 0x272940u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x272944: 0x46800860
    ctx->pc = 0x272944u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272948: 0x46010840
    ctx->pc = 0x272948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27294c:
    // 0x27294c: 0x3c013c0e
    ctx->pc = 0x27294cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15374 << 16));
    // 0x272950: 0x3421fa36
    ctx->pc = 0x272950u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 64054));
    // 0x272954: 0x44810000
    ctx->pc = 0x272954u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272958: 0x10000014
    ctx->pc = 0x272958u;
    {
        const bool branch_taken_0x272958 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27295Cu;
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x272958) {
            ctx->pc = 0x2729ACu;
            goto label_2729ac;
        }
    }
    ctx->pc = 0x272960u;
label_272960:
    // 0x272960: 0x3c030031
    ctx->pc = 0x272960u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x272964: 0x8c62ffbc
    ctx->pc = 0x272964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
    // 0x272968: 0x4400005
    ctx->pc = 0x272968u;
    {
        const bool branch_taken_0x272968 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27296Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x272968) {
            ctx->pc = 0x272980u;
            goto label_272980;
        }
    }
    ctx->pc = 0x272970u;
    // 0x272970: 0x44820800
    ctx->pc = 0x272970u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x272974: 0x46800860
    ctx->pc = 0x272974u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272978: 0x10000008
    ctx->pc = 0x272978u;
    {
        const bool branch_taken_0x272978 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x272978) {
            ctx->pc = 0x27299Cu;
            goto label_27299c;
        }
    }
    ctx->pc = 0x272980u;
label_272980:
    // 0x272980: 0x8c820000
    ctx->pc = 0x272980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x272984: 0x30430001
    ctx->pc = 0x272984u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
    // 0x272988: 0x21042
    ctx->pc = 0x272988u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x27298c: 0x621825
    ctx->pc = 0x27298cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x272990: 0x44830800
    ctx->pc = 0x272990u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x272994: 0x46800860
    ctx->pc = 0x272994u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x272998: 0x46010840
    ctx->pc = 0x272998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_27299c:
    // 0x27299c: 0x3c013da0
    ctx->pc = 0x27299cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15776 << 16));
    // 0x2729a0: 0x3421d97c
    ctx->pc = 0x2729a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55676));
    // 0x2729a4: 0x44810000
    ctx->pc = 0x2729a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2729a8: 0x46000842
    ctx->pc = 0x2729a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2729ac:
    // 0x2729ac: 0x44800000
    ctx->pc = 0x2729acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2729b0: 0x46020036
    ctx->pc = 0x2729b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2729b4: 0x0
    ctx->pc = 0x2729b4u;
    // NOP
    // 0x2729b8: 0x45020007
    ctx->pc = 0x2729B8u;
    {
        const bool branch_taken_0x2729b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2729b8) {
            ctx->pc = 0x2729BCu;
            ctx->f[0] = FPU_NEG_S(ctx->f[1]);
            ctx->pc = 0x2729D8u;
            goto label_2729d8;
        }
    }
    ctx->pc = 0x2729C0u;
    // 0x2729c0: 0x46011036
    ctx->pc = 0x2729c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2729c4: 0x0
    ctx->pc = 0x2729c4u;
    // NOP
    // 0x2729c8: 0x45030001
    ctx->pc = 0x2729C8u;
    {
        const bool branch_taken_0x2729c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2729c8) {
            ctx->pc = 0x2729CCu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2729D0u;
            goto label_2729d0;
        }
    }
    ctx->pc = 0x2729D0u;
label_2729d0:
    // 0x2729d0: 0x10000006
    ctx->pc = 0x2729D0u;
    {
        const bool branch_taken_0x2729d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2729D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2729d0) {
            ctx->pc = 0x2729ECu;
            goto label_2729ec;
        }
    }
    ctx->pc = 0x2729D8u;
label_2729d8:
    // 0x2729d8: 0x46020036
    ctx->pc = 0x2729d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2729dc: 0x0
    ctx->pc = 0x2729dcu;
    // NOP
    // 0x2729e0: 0x45030001
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x2729E4u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2729E8u;
            goto label_2729e8;
        }
    }
    ctx->pc = 0x2729E8u;
label_2729e8:
    // 0x2729e8: 0x2402ffff
    ctx->pc = 0x2729e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2729ec:
    // 0x2729ec: 0x10a00003
    ctx->pc = 0x2729ECu;
    {
        const bool branch_taken_0x2729ec = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2729ec) {
            ctx->pc = 0x2729FCu;
            goto label_2729fc;
        }
    }
    ctx->pc = 0x2729F4u;
    // 0x2729f4: 0x10000004
    ctx->pc = 0x2729F4u;
    {
        const bool branch_taken_0x2729f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2729F8u;
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x2729f4) {
            ctx->pc = 0x272A08u;
            goto label_272a08;
        }
    }
    ctx->pc = 0x2729FCu;
label_2729fc:
    // 0x2729fc: 0x58400002
    ctx->pc = 0x2729FCu;
    {
        const bool branch_taken_0x2729fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2729fc) {
            ctx->pc = 0x272A00u;
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
            ctx->pc = 0x272A08u;
            goto label_272a08;
        }
    }
    ctx->pc = 0x272A04u;
    // 0x272a04: 0x46016300
    ctx->pc = 0x272a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_272a08:
    // 0x272a08: 0x3c014049
    ctx->pc = 0x272a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x272a0c: 0x34210fdb
    ctx->pc = 0x272a0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x272a10: 0x44810000
    ctx->pc = 0x272a10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272a14: 0x460c0034
    ctx->pc = 0x272a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272a18: 0x45000006
    ctx->pc = 0x272A18u;
    {
        const bool branch_taken_0x272a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272a18) {
            ctx->pc = 0x272A34u;
            goto label_272a34;
        }
    }
    ctx->pc = 0x272A20u;
    // 0x272a20: 0x3c0140c9
    ctx->pc = 0x272a20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x272a24: 0x34210fdb
    ctx->pc = 0x272a24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x272a28: 0x44810000
    ctx->pc = 0x272a28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272a2c: 0x3e00008
    ctx->pc = 0x272A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A30u;
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2728D4u: goto label_2728d4;
            case 0x272900u: goto label_272900;
            case 0x272930u: goto label_272930;
            case 0x27294Cu: goto label_27294c;
            case 0x272960u: goto label_272960;
            case 0x272980u: goto label_272980;
            case 0x27299Cu: goto label_27299c;
            case 0x2729ACu: goto label_2729ac;
            case 0x2729D0u: goto label_2729d0;
            case 0x2729D8u: goto label_2729d8;
            case 0x2729E8u: goto label_2729e8;
            case 0x2729ECu: goto label_2729ec;
            case 0x2729FCu: goto label_2729fc;
            case 0x272A08u: goto label_272a08;
            case 0x272A34u: goto label_272a34;
            case 0x272A60u: goto label_272a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x272A34u;
label_272a34:
    // 0x272a34: 0x3c01c049
    ctx->pc = 0x272a34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x272a38: 0x34210fdb
    ctx->pc = 0x272a38u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x272a3c: 0x44810000
    ctx->pc = 0x272a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272a40: 0x46006036
    ctx->pc = 0x272a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272a44: 0x45000006
    ctx->pc = 0x272A44u;
    {
        const bool branch_taken_0x272a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272a44) {
            ctx->pc = 0x272A60u;
            goto label_272a60;
        }
    }
    ctx->pc = 0x272A4Cu;
    // 0x272a4c: 0x3c0140c9
    ctx->pc = 0x272a4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x272a50: 0x34210fdb
    ctx->pc = 0x272a50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x272a54: 0x44810000
    ctx->pc = 0x272a54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x272a58: 0x3e00008
    ctx->pc = 0x272A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A5Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2728D4u: goto label_2728d4;
            case 0x272900u: goto label_272900;
            case 0x272930u: goto label_272930;
            case 0x27294Cu: goto label_27294c;
            case 0x272960u: goto label_272960;
            case 0x272980u: goto label_272980;
            case 0x27299Cu: goto label_27299c;
            case 0x2729ACu: goto label_2729ac;
            case 0x2729D0u: goto label_2729d0;
            case 0x2729D8u: goto label_2729d8;
            case 0x2729E8u: goto label_2729e8;
            case 0x2729ECu: goto label_2729ec;
            case 0x2729FCu: goto label_2729fc;
            case 0x272A08u: goto label_272a08;
            case 0x272A34u: goto label_272a34;
            case 0x272A60u: goto label_272a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x272A60u;
label_272a60:
    // 0x272a60: 0x3e00008
    ctx->pc = 0x272A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272A64u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2728D4u: goto label_2728d4;
            case 0x272900u: goto label_272900;
            case 0x272930u: goto label_272930;
            case 0x27294Cu: goto label_27294c;
            case 0x272960u: goto label_272960;
            case 0x272980u: goto label_272980;
            case 0x27299Cu: goto label_27299c;
            case 0x2729ACu: goto label_2729ac;
            case 0x2729D0u: goto label_2729d0;
            case 0x2729D8u: goto label_2729d8;
            case 0x2729E8u: goto label_2729e8;
            case 0x2729ECu: goto label_2729ec;
            case 0x2729FCu: goto label_2729fc;
            case 0x272A08u: goto label_272a08;
            case 0x272A34u: goto label_272a34;
            case 0x272A60u: goto label_272a60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x272A68u;
}
