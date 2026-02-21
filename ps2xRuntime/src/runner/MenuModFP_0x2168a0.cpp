#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MenuModFP
// Address: 0x2168a0 - 0x2169d4
void MenuModFP_0x2168a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2168a0u;

label_2168a0:
    // 0x2168a0: 0x3c02003c
    ctx->pc = 0x2168a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2168a4:
    // 0x2168a4: 0x8c42cf40
    ctx->pc = 0x2168a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954816)));
label_2168a8:
    // 0x2168a8: 0x10400003
label_2168ac:
    if (ctx->pc == 0x2168ACu) {
        ctx->pc = 0x2168ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2168B0u;
        goto label_2168b0;
    }
    ctx->pc = 0x2168A8u;
    {
        const bool branch_taken_0x2168a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2168ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2168a8) {
            ctx->pc = 0x2168B8u;
            goto label_2168b8;
        }
    }
    ctx->pc = 0x2168B0u;
label_2168b0:
    // 0x2168b0: 0x3e00008
label_2168b4:
    if (ctx->pc == 0x2168B4u) {
        ctx->pc = 0x2168B4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2168B8u;
        goto label_2168b8;
    }
    ctx->pc = 0x2168B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2168B4u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2168A0u: goto label_2168a0;
            case 0x2168A4u: goto label_2168a4;
            case 0x2168A8u: goto label_2168a8;
            case 0x2168ACu: goto label_2168ac;
            case 0x2168B0u: goto label_2168b0;
            case 0x2168B4u: goto label_2168b4;
            case 0x2168B8u: goto label_2168b8;
            case 0x2168BCu: goto label_2168bc;
            case 0x2168C0u: goto label_2168c0;
            case 0x2168C4u: goto label_2168c4;
            case 0x2168C8u: goto label_2168c8;
            case 0x2168CCu: goto label_2168cc;
            case 0x2168D0u: goto label_2168d0;
            case 0x2168D4u: goto label_2168d4;
            case 0x2168D8u: goto label_2168d8;
            case 0x2168DCu: goto label_2168dc;
            case 0x2168E0u: goto label_2168e0;
            case 0x2168E4u: goto label_2168e4;
            case 0x2168E8u: goto label_2168e8;
            case 0x2168ECu: goto label_2168ec;
            case 0x2168F0u: goto label_2168f0;
            case 0x2168F4u: goto label_2168f4;
            case 0x2168F8u: goto label_2168f8;
            case 0x2168FCu: goto label_2168fc;
            case 0x216900u: goto label_216900;
            case 0x216904u: goto label_216904;
            case 0x216908u: goto label_216908;
            case 0x21690Cu: goto label_21690c;
            case 0x216910u: goto label_216910;
            case 0x216914u: goto label_216914;
            case 0x216918u: goto label_216918;
            case 0x21691Cu: goto label_21691c;
            case 0x216920u: goto label_216920;
            case 0x216924u: goto label_216924;
            case 0x216928u: goto label_216928;
            case 0x21692Cu: goto label_21692c;
            case 0x216930u: goto label_216930;
            case 0x216934u: goto label_216934;
            case 0x216938u: goto label_216938;
            case 0x21693Cu: goto label_21693c;
            case 0x216940u: goto label_216940;
            case 0x216944u: goto label_216944;
            case 0x216948u: goto label_216948;
            case 0x21694Cu: goto label_21694c;
            case 0x216950u: goto label_216950;
            case 0x216954u: goto label_216954;
            case 0x216958u: goto label_216958;
            case 0x21695Cu: goto label_21695c;
            case 0x216960u: goto label_216960;
            case 0x216964u: goto label_216964;
            case 0x216968u: goto label_216968;
            case 0x21696Cu: goto label_21696c;
            case 0x216970u: goto label_216970;
            case 0x216974u: goto label_216974;
            case 0x216978u: goto label_216978;
            case 0x21697Cu: goto label_21697c;
            case 0x216980u: goto label_216980;
            case 0x216984u: goto label_216984;
            case 0x216988u: goto label_216988;
            case 0x21698Cu: goto label_21698c;
            case 0x216990u: goto label_216990;
            case 0x216994u: goto label_216994;
            case 0x216998u: goto label_216998;
            case 0x21699Cu: goto label_21699c;
            case 0x2169A0u: goto label_2169a0;
            case 0x2169A4u: goto label_2169a4;
            case 0x2169A8u: goto label_2169a8;
            case 0x2169ACu: goto label_2169ac;
            case 0x2169B0u: goto label_2169b0;
            case 0x2169B4u: goto label_2169b4;
            case 0x2169B8u: goto label_2169b8;
            case 0x2169BCu: goto label_2169bc;
            case 0x2169C0u: goto label_2169c0;
            case 0x2169C4u: goto label_2169c4;
            case 0x2169C8u: goto label_2169c8;
            case 0x2169CCu: goto label_2169cc;
            case 0x2169D0u: goto label_2169d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2168B8u;
label_2168b8:
    // 0x2168b8: 0x8c42f8cc
    ctx->pc = 0x2168b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965452)));
label_2168bc:
    // 0x2168bc: 0x1040000c
label_2168c0:
    if (ctx->pc == 0x2168C0u) {
        ctx->pc = 0x2168C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x2168C4u;
        goto label_2168c4;
    }
    ctx->pc = 0x2168BCu;
    {
        const bool branch_taken_0x2168bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2168C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2168bc) {
            ctx->pc = 0x2168F0u;
            goto label_2168f0;
        }
    }
    ctx->pc = 0x2168C4u;
label_2168c4:
    // 0x2168c4: 0x2463cef8
    ctx->pc = 0x2168c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954744));
label_2168c8:
    // 0x2168c8: 0x51080
    ctx->pc = 0x2168c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_2168cc:
    // 0x2168cc: 0x431021
    ctx->pc = 0x2168ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2168d0:
    // 0x2168d0: 0x8c420000
    ctx->pc = 0x2168d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2168d4:
    // 0x2168d4: 0x3c030010
    ctx->pc = 0x2168d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_2168d8:
    // 0x2168d8: 0x431024
    ctx->pc = 0x2168d8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2168dc:
    // 0x2168dc: 0x10400005
label_2168e0:
    if (ctx->pc == 0x2168E0u) {
        ctx->pc = 0x2168E0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
        ctx->pc = 0x2168E4u;
        goto label_2168e4;
    }
    ctx->pc = 0x2168DCu;
    {
        const bool branch_taken_0x2168dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2168E0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
        if (branch_taken_0x2168dc) {
            ctx->pc = 0x2168F4u;
            goto label_2168f4;
        }
    }
    ctx->pc = 0x2168E4u;
label_2168e4:
    // 0x2168e4: 0x3c0140a0
    ctx->pc = 0x2168e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
label_2168e8:
    // 0x2168e8: 0x44810000
    ctx->pc = 0x2168e8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2168ec:
    // 0x2168ec: 0x46006b42
    ctx->pc = 0x2168ecu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_2168f0:
    // 0x2168f0: 0x2c820005
    ctx->pc = 0x2168f0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 5));
label_2168f4:
    // 0x2168f4: 0x10400007
label_2168f8:
    if (ctx->pc == 0x2168F8u) {
        ctx->pc = 0x2168F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x2168FCu;
        goto label_2168fc;
    }
    ctx->pc = 0x2168F4u;
    {
        const bool branch_taken_0x2168f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2168F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2168f4) {
            ctx->pc = 0x216914u;
            goto label_216914;
        }
    }
    ctx->pc = 0x2168FCu;
label_2168fc:
    // 0x2168fc: 0x24425b70
    ctx->pc = 0x2168fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23408));
label_216900:
    // 0x216900: 0x41880
    ctx->pc = 0x216900u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
label_216904:
    // 0x216904: 0x621821
    ctx->pc = 0x216904u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_216908:
    // 0x216908: 0x8c620000
    ctx->pc = 0x216908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21690c:
    // 0x21690c: 0x400008
label_216910:
    if (ctx->pc == 0x216910u) {
        ctx->pc = 0x216914u;
        goto label_216914;
    }
    ctx->pc = 0x21690Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2168A0u: goto label_2168a0;
            case 0x2168A4u: goto label_2168a4;
            case 0x2168A8u: goto label_2168a8;
            case 0x2168ACu: goto label_2168ac;
            case 0x2168B0u: goto label_2168b0;
            case 0x2168B4u: goto label_2168b4;
            case 0x2168B8u: goto label_2168b8;
            case 0x2168BCu: goto label_2168bc;
            case 0x2168C0u: goto label_2168c0;
            case 0x2168C4u: goto label_2168c4;
            case 0x2168C8u: goto label_2168c8;
            case 0x2168CCu: goto label_2168cc;
            case 0x2168D0u: goto label_2168d0;
            case 0x2168D4u: goto label_2168d4;
            case 0x2168D8u: goto label_2168d8;
            case 0x2168DCu: goto label_2168dc;
            case 0x2168E0u: goto label_2168e0;
            case 0x2168E4u: goto label_2168e4;
            case 0x2168E8u: goto label_2168e8;
            case 0x2168ECu: goto label_2168ec;
            case 0x2168F0u: goto label_2168f0;
            case 0x2168F4u: goto label_2168f4;
            case 0x2168F8u: goto label_2168f8;
            case 0x2168FCu: goto label_2168fc;
            case 0x216900u: goto label_216900;
            case 0x216904u: goto label_216904;
            case 0x216908u: goto label_216908;
            case 0x21690Cu: goto label_21690c;
            case 0x216910u: goto label_216910;
            case 0x216914u: goto label_216914;
            case 0x216918u: goto label_216918;
            case 0x21691Cu: goto label_21691c;
            case 0x216920u: goto label_216920;
            case 0x216924u: goto label_216924;
            case 0x216928u: goto label_216928;
            case 0x21692Cu: goto label_21692c;
            case 0x216930u: goto label_216930;
            case 0x216934u: goto label_216934;
            case 0x216938u: goto label_216938;
            case 0x21693Cu: goto label_21693c;
            case 0x216940u: goto label_216940;
            case 0x216944u: goto label_216944;
            case 0x216948u: goto label_216948;
            case 0x21694Cu: goto label_21694c;
            case 0x216950u: goto label_216950;
            case 0x216954u: goto label_216954;
            case 0x216958u: goto label_216958;
            case 0x21695Cu: goto label_21695c;
            case 0x216960u: goto label_216960;
            case 0x216964u: goto label_216964;
            case 0x216968u: goto label_216968;
            case 0x21696Cu: goto label_21696c;
            case 0x216970u: goto label_216970;
            case 0x216974u: goto label_216974;
            case 0x216978u: goto label_216978;
            case 0x21697Cu: goto label_21697c;
            case 0x216980u: goto label_216980;
            case 0x216984u: goto label_216984;
            case 0x216988u: goto label_216988;
            case 0x21698Cu: goto label_21698c;
            case 0x216990u: goto label_216990;
            case 0x216994u: goto label_216994;
            case 0x216998u: goto label_216998;
            case 0x21699Cu: goto label_21699c;
            case 0x2169A0u: goto label_2169a0;
            case 0x2169A4u: goto label_2169a4;
            case 0x2169A8u: goto label_2169a8;
            case 0x2169ACu: goto label_2169ac;
            case 0x2169B0u: goto label_2169b0;
            case 0x2169B4u: goto label_2169b4;
            case 0x2169B8u: goto label_2169b8;
            case 0x2169BCu: goto label_2169bc;
            case 0x2169C0u: goto label_2169c0;
            case 0x2169C4u: goto label_2169c4;
            case 0x2169C8u: goto label_2169c8;
            case 0x2169CCu: goto label_2169cc;
            case 0x2169D0u: goto label_2169d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216914u;
label_216914:
    // 0x216914: 0x24040003
    ctx->pc = 0x216914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_216918:
    // 0x216918: 0x1000000c
label_21691c:
    if (ctx->pc == 0x21691Cu) {
        ctx->pc = 0x21691Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x216920u;
        goto label_216920;
    }
    ctx->pc = 0x216918u;
    {
        const bool branch_taken_0x216918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21691Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x216918) {
            ctx->pc = 0x21694Cu;
            goto label_21694c;
        }
    }
    ctx->pc = 0x216920u;
label_216920:
    // 0x216920: 0x24040030
    ctx->pc = 0x216920u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
label_216924:
    // 0x216924: 0x10000009
label_216928:
    if (ctx->pc == 0x216928u) {
        ctx->pc = 0x216928u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
        ctx->pc = 0x21692Cu;
        goto label_21692c;
    }
    ctx->pc = 0x216924u;
    {
        const bool branch_taken_0x216924 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216928u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 192));
        if (branch_taken_0x216924) {
            ctx->pc = 0x21694Cu;
            goto label_21694c;
        }
    }
    ctx->pc = 0x21692Cu;
label_21692c:
    // 0x21692c: 0x3c040800
    ctx->pc = 0x21692cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)2048 << 16));
label_216930:
    // 0x216930: 0x10000006
label_216934:
    if (ctx->pc == 0x216934u) {
        ctx->pc = 0x216934u;
        SET_GPR_U32(ctx, 6, ((uint32_t)512 << 16));
        ctx->pc = 0x216938u;
        goto label_216938;
    }
    ctx->pc = 0x216930u;
    {
        const bool branch_taken_0x216930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216934u;
        SET_GPR_U32(ctx, 6, ((uint32_t)512 << 16));
        if (branch_taken_0x216930) {
            ctx->pc = 0x21694Cu;
            goto label_21694c;
        }
    }
    ctx->pc = 0x216938u;
label_216938:
    // 0x216938: 0x3c040400
    ctx->pc = 0x216938u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1024 << 16));
label_21693c:
    // 0x21693c: 0x10000003
label_216940:
    if (ctx->pc == 0x216940u) {
        ctx->pc = 0x216940u;
        SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
        ctx->pc = 0x216944u;
        goto label_216944;
    }
    ctx->pc = 0x21693Cu;
    {
        const bool branch_taken_0x21693c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216940u;
        SET_GPR_U32(ctx, 6, ((uint32_t)256 << 16));
        if (branch_taken_0x21693c) {
            ctx->pc = 0x21694Cu;
            goto label_21694c;
        }
    }
    ctx->pc = 0x216944u;
label_216944:
    // 0x216944: 0x3c040040
    ctx->pc = 0x216944u;
    SET_GPR_U32(ctx, 4, ((uint32_t)64 << 16));
label_216948:
    // 0x216948: 0x3c060080
    ctx->pc = 0x216948u;
    SET_GPR_U32(ctx, 6, ((uint32_t)128 << 16));
label_21694c:
    // 0x21694c: 0x3c02003c
    ctx->pc = 0x21694cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216950:
    // 0x216950: 0x2442cef8
    ctx->pc = 0x216950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954744));
label_216954:
    // 0x216954: 0x51880
    ctx->pc = 0x216954u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_216958:
    // 0x216958: 0x621821
    ctx->pc = 0x216958u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21695c:
    // 0x21695c: 0x8c620000
    ctx->pc = 0x21695cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216960:
    // 0x216960: 0x821024
    ctx->pc = 0x216960u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_216964:
    // 0x216964: 0x10400009
label_216968:
    if (ctx->pc == 0x216968u) {
        ctx->pc = 0x216968u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x21696Cu;
        goto label_21696c;
    }
    ctx->pc = 0x216964u;
    {
        const bool branch_taken_0x216964 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216968u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x216964) {
            ctx->pc = 0x21698Cu;
            goto label_21698c;
        }
    }
    ctx->pc = 0x21696Cu;
label_21696c:
    // 0x21696c: 0x3c03003c
    ctx->pc = 0x21696cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216970:
    // 0x216970: 0x8c63cf44
    ctx->pc = 0x216970u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954820)));
label_216974:
    // 0x216974: 0x460d6300
    ctx->pc = 0x216974u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
label_216978:
    // 0x216978: 0x460c7834
    ctx->pc = 0x216978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21697c:
    // 0x21697c: 0x0
    ctx->pc = 0x21697cu;
    // NOP
label_216980:
    // 0x216980: 0x45000002
label_216984:
    if (ctx->pc == 0x216984u) {
        ctx->pc = 0x216984u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 3));
        ctx->pc = 0x216988u;
        goto label_216988;
    }
    ctx->pc = 0x216980u;
    {
        const bool branch_taken_0x216980 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x216984u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 3));
        if (branch_taken_0x216980) {
            ctx->pc = 0x21698Cu;
            goto label_21698c;
        }
    }
    ctx->pc = 0x216988u;
label_216988:
    // 0x216988: 0x46007306
    ctx->pc = 0x216988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
label_21698c:
    // 0x21698c: 0x3c02003c
    ctx->pc = 0x21698cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216990:
    // 0x216990: 0x2442cef8
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294954744));
label_216994:
    // 0x216994: 0x51880
    ctx->pc = 0x216994u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_216998:
    // 0x216998: 0x621821
    ctx->pc = 0x216998u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21699c:
    // 0x21699c: 0x8c620000
    ctx->pc = 0x21699cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2169a0:
    // 0x2169a0: 0xc21024
    ctx->pc = 0x2169a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2169a4:
    // 0x2169a4: 0x10400009
label_2169a8:
    if (ctx->pc == 0x2169A8u) {
        ctx->pc = 0x2169A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x2169ACu;
        goto label_2169ac;
    }
    ctx->pc = 0x2169A4u;
    {
        const bool branch_taken_0x2169a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2169A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2169a4) {
            ctx->pc = 0x2169CCu;
            goto label_2169cc;
        }
    }
    ctx->pc = 0x2169ACu;
label_2169ac:
    // 0x2169ac: 0x3c03003c
    ctx->pc = 0x2169acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_2169b0:
    // 0x2169b0: 0x8c63cf44
    ctx->pc = 0x2169b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954820)));
label_2169b4:
    // 0x2169b4: 0x460d6301
    ctx->pc = 0x2169b4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
label_2169b8:
    // 0x2169b8: 0x460e6034
    ctx->pc = 0x2169b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2169bc:
    // 0x2169bc: 0x0
    ctx->pc = 0x2169bcu;
    // NOP
label_2169c0:
    // 0x2169c0: 0x45000002
label_2169c4:
    if (ctx->pc == 0x2169C4u) {
        ctx->pc = 0x2169C4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 3));
        ctx->pc = 0x2169C8u;
        goto label_2169c8;
    }
    ctx->pc = 0x2169C0u;
    {
        const bool branch_taken_0x2169c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2169C4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 3));
        if (branch_taken_0x2169c0) {
            ctx->pc = 0x2169CCu;
            goto label_2169cc;
        }
    }
    ctx->pc = 0x2169C8u;
label_2169c8:
    // 0x2169c8: 0x46007b06
    ctx->pc = 0x2169c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[15]);
label_2169cc:
    // 0x2169cc: 0x3e00008
label_2169d0:
    if (ctx->pc == 0x2169D0u) {
        ctx->pc = 0x2169D0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2169D4u;
        goto label_fallthrough_0x2169cc;
    }
    ctx->pc = 0x2169CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2169D0u;
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2168A0u: goto label_2168a0;
            case 0x2168A4u: goto label_2168a4;
            case 0x2168A8u: goto label_2168a8;
            case 0x2168ACu: goto label_2168ac;
            case 0x2168B0u: goto label_2168b0;
            case 0x2168B4u: goto label_2168b4;
            case 0x2168B8u: goto label_2168b8;
            case 0x2168BCu: goto label_2168bc;
            case 0x2168C0u: goto label_2168c0;
            case 0x2168C4u: goto label_2168c4;
            case 0x2168C8u: goto label_2168c8;
            case 0x2168CCu: goto label_2168cc;
            case 0x2168D0u: goto label_2168d0;
            case 0x2168D4u: goto label_2168d4;
            case 0x2168D8u: goto label_2168d8;
            case 0x2168DCu: goto label_2168dc;
            case 0x2168E0u: goto label_2168e0;
            case 0x2168E4u: goto label_2168e4;
            case 0x2168E8u: goto label_2168e8;
            case 0x2168ECu: goto label_2168ec;
            case 0x2168F0u: goto label_2168f0;
            case 0x2168F4u: goto label_2168f4;
            case 0x2168F8u: goto label_2168f8;
            case 0x2168FCu: goto label_2168fc;
            case 0x216900u: goto label_216900;
            case 0x216904u: goto label_216904;
            case 0x216908u: goto label_216908;
            case 0x21690Cu: goto label_21690c;
            case 0x216910u: goto label_216910;
            case 0x216914u: goto label_216914;
            case 0x216918u: goto label_216918;
            case 0x21691Cu: goto label_21691c;
            case 0x216920u: goto label_216920;
            case 0x216924u: goto label_216924;
            case 0x216928u: goto label_216928;
            case 0x21692Cu: goto label_21692c;
            case 0x216930u: goto label_216930;
            case 0x216934u: goto label_216934;
            case 0x216938u: goto label_216938;
            case 0x21693Cu: goto label_21693c;
            case 0x216940u: goto label_216940;
            case 0x216944u: goto label_216944;
            case 0x216948u: goto label_216948;
            case 0x21694Cu: goto label_21694c;
            case 0x216950u: goto label_216950;
            case 0x216954u: goto label_216954;
            case 0x216958u: goto label_216958;
            case 0x21695Cu: goto label_21695c;
            case 0x216960u: goto label_216960;
            case 0x216964u: goto label_216964;
            case 0x216968u: goto label_216968;
            case 0x21696Cu: goto label_21696c;
            case 0x216970u: goto label_216970;
            case 0x216974u: goto label_216974;
            case 0x216978u: goto label_216978;
            case 0x21697Cu: goto label_21697c;
            case 0x216980u: goto label_216980;
            case 0x216984u: goto label_216984;
            case 0x216988u: goto label_216988;
            case 0x21698Cu: goto label_21698c;
            case 0x216990u: goto label_216990;
            case 0x216994u: goto label_216994;
            case 0x216998u: goto label_216998;
            case 0x21699Cu: goto label_21699c;
            case 0x2169A0u: goto label_2169a0;
            case 0x2169A4u: goto label_2169a4;
            case 0x2169A8u: goto label_2169a8;
            case 0x2169ACu: goto label_2169ac;
            case 0x2169B0u: goto label_2169b0;
            case 0x2169B4u: goto label_2169b4;
            case 0x2169B8u: goto label_2169b8;
            case 0x2169BCu: goto label_2169bc;
            case 0x2169C0u: goto label_2169c0;
            case 0x2169C4u: goto label_2169c4;
            case 0x2169C8u: goto label_2169c8;
            case 0x2169CCu: goto label_2169cc;
            case 0x2169D0u: goto label_2169d0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2169cc:
    ctx->pc = 0x2169D4u;
}
