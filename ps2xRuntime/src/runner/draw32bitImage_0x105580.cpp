#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>

// Function: draw32bitImage
// Address: 0x105580 - 0x105810
void draw32bitImage_0x105580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int s_callCount = 0;
    ++s_callCount;
    if (s_callCount <= 5 || (s_callCount % 200) == 0) {
        std::fprintf(stderr, "[draw32bitImage #%d] imgId(r4)=0x%x w(r5)=%d h(r6)=%d r7=%d r8=0x%x scaleX(r9)=%d scaleY(r10)=%d r11=%d\n",
                     s_callCount, GPR_U32(ctx, 4), GPR_S32(ctx, 5), GPR_S32(ctx, 6),
                     GPR_S32(ctx, 7), GPR_U32(ctx, 8), GPR_S32(ctx, 9),
                     GPR_S32(ctx, 10), GPR_S32(ctx, 11));
    }

    ctx->pc = 0x105580u;

    // 0x105580: 0x27bdff70
    ctx->pc = 0x105580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x105584: 0x8f8282b4
    ctx->pc = 0x105584u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x105588: 0xffb70070
    ctx->pc = 0x105588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x10558c: 0xffb60060
    ctx->pc = 0x10558cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105590: 0x100b82d
    ctx->pc = 0x105590u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105594: 0xffb50050
    ctx->pc = 0x105594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105598: 0xe0b02d
    ctx->pc = 0x105598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10559c: 0xffb40040
    ctx->pc = 0x10559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1055a0: 0xc0a82d
    ctx->pc = 0x1055a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055a4: 0xffb30030
    ctx->pc = 0x1055a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1055a8: 0x140a02d
    ctx->pc = 0x1055a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055ac: 0xffb20020
    ctx->pc = 0x1055acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1055b0: 0xa0982d
    ctx->pc = 0x1055b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055b4: 0xffb10010
    ctx->pc = 0x1055b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1055b8: 0x120902d
    ctx->pc = 0x1055b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055bc: 0xffb00000
    ctx->pc = 0x1055bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1055c0: 0xffbf0080
    ctx->pc = 0x1055c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1055c4: 0x80802d
    ctx->pc = 0x1055c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055c8: 0x12020005
    ctx->pc = 0x1055C8u;
    {
        const bool branch_taken_0x1055c8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1055CCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x1055c8) {
            ctx->pc = 0x1055E0u;
            goto label_1055e0;
        }
    }
    ctx->pc = 0x1055D0u;
    // 0x1055d0: 0x24052b00
    ctx->pc = 0x1055d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x1055d4: 0x260302d
    ctx->pc = 0x1055d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055d8: 0xc040c8c
    ctx->pc = 0x1055D8u;
    SET_GPR_U32(ctx, 31, 0x1055E0u);
    ctx->pc = 0x1055DCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103230u;
    {
        const uint32_t __entryPc = ctx->pc;
        load32bitImage_0x103230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1055E0u; }
    }
    if (ctx->pc != 0x1055E0u) { return; }
    ctx->pc = 0x1055E0u;
label_1055e0:
    // 0x1055e0: 0x8f8282b8
    ctx->pc = 0x1055e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1055e4: 0x70001ca9
    ctx->pc = 0x1055e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1055e8: 0xaf9082b4
    ctx->pc = 0x1055e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 16));
    // 0x1055ec: 0x3c071000
    ctx->pc = 0x1055ecu;
    SET_GPR_S32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x1055f0: 0x7c430000
    ctx->pc = 0x1055f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1055f4: 0x3c061000
    ctx->pc = 0x1055f4u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1055f8: 0x6303c
    ctx->pc = 0x1055f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1055fc: 0x34c60006
    ctx->pc = 0x1055fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)6);
    // 0x105600: 0x2405000e
    ctx->pc = 0x105600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x105604: 0x2403003f
    ctx->pc = 0x105604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x105608: 0x2a0202d
    ctx->pc = 0x105608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10560c: 0xac470000
    ctx->pc = 0x10560cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x105610: 0xfc430028
    ctx->pc = 0x105610u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x105614: 0xfc460010
    ctx->pc = 0x105614u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x105618: 0xfc450018
    ctx->pc = 0x105618u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x10561c: 0xc040a9e
    ctx->pc = 0x10561Cu;
    SET_GPR_U32(ctx, 31, 0x105624u);
    ctx->pc = 0x105620u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    ctx->pc = 0x102A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105624u; }
    }
    if (ctx->pc != 0x105624u) { return; }
    ctx->pc = 0x105624u;
    // 0x105624: 0x40802d
    ctx->pc = 0x105624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105628: 0xc040a9e
    ctx->pc = 0x105628u;
    SET_GPR_U32(ctx, 31, 0x105630u);
    ctx->pc = 0x10562Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105630u; }
    }
    if (ctx->pc != 0x105630u) { return; }
    ctx->pc = 0x105630u;
    // 0x105630: 0x2403ffff
    ctx->pc = 0x105630u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105634: 0x2664003f
    ctx->pc = 0x105634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 63));
    // 0x105638: 0x73182a
    ctx->pc = 0x105638u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 19)));
    // 0x10563c: 0x263200b
    ctx->pc = 0x10563cu;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 19));
    // 0x105640: 0x42183
    ctx->pc = 0x105640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x105644: 0x216b8
    ctx->pc = 0x105644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x105648: 0x1087b8
    ctx->pc = 0x105648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x10564c: 0x423b8
    ctx->pc = 0x10564cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x105650: 0x34038000
    ctx->pc = 0x105650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x105654: 0x31bbc
    ctx->pc = 0x105654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x105658: 0x2028025
    ctx->pc = 0x105658u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10565c: 0x832025
    ctx->pc = 0x10565cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x105660: 0x902025
    ctx->pc = 0x105660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x105664: 0x24020004
    ctx->pc = 0x105664u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x105668: 0x2103c
    ctx->pc = 0x105668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10566c: 0x34422b00
    ctx->pc = 0x10566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)11008);
    // 0x105670: 0x8f9882b8
    ctx->pc = 0x105670u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x105674: 0x822025
    ctx->pc = 0x105674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x105678: 0x125043
    ctx->pc = 0x105678u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 18), 1));
    // 0x10567c: 0x144843
    ctx->pc = 0x10567cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 20), 1));
    // 0x105680: 0x11283c
    ctx->pc = 0x105680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x105684: 0x2caa023
    ctx->pc = 0x105684u;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x105688: 0x5283e
    ctx->pc = 0x105688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x10568c: 0x24020006
    ctx->pc = 0x10568cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x105690: 0x24070154
    ctx->pc = 0x105690u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 340));
    // 0x105694: 0x240b0044
    ctx->pc = 0x105694u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 68));
    // 0x105698: 0x240c0042
    ctx->pc = 0x105698u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 66));
    // 0x10569c: 0x240d0001
    ctx->pc = 0x10569cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1056a0: 0x3c0e0002
    ctx->pc = 0x1056a0u;
    SET_GPR_S32(ctx, 14, ((uint32_t)2 << 16));
    // 0x1056a4: 0x24100047
    ctx->pc = 0x1056a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1056a8: 0x3c118000
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 17, ((uint32_t)32768 << 16));
    // 0x1056ac: 0x11883c
    ctx->pc = 0x1056acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1056b0: 0x36318001
    ctx->pc = 0x1056b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)32769);
    // 0x1056b4: 0x3c124343
    ctx->pc = 0x1056b4u;
    SET_GPR_S32(ctx, 18, ((uint32_t)17219 << 16));
    // 0x1056b8: 0x36524343
    ctx->pc = 0x1056b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)17219);
    // 0x1056bc: 0xff040030
    ctx->pc = 0x1056bcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 4));
    // 0x1056c0: 0x3c080010
    ctx->pc = 0x1056c0u;
    SET_GPR_S32(ctx, 8, ((uint32_t)16 << 16));
    // 0x1056c4: 0xff020038
    ctx->pc = 0x1056c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x1056c8: 0x2e97823
    ctx->pc = 0x1056c8u;
    SET_GPR_U32(ctx, 15, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x1056cc: 0xff070040
    ctx->pc = 0x1056ccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 7));
    // 0x1056d0: 0x270600a0
    ctx->pc = 0x1056d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 24), 160));
    // 0x1056d4: 0xff0b0050
    ctx->pc = 0x1056d4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 11));
    // 0x1056d8: 0x2ca5021
    ctx->pc = 0x1056d8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
    // 0x1056dc: 0xff0c0058
    ctx->pc = 0x1056dcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 12));
    // 0x1056e0: 0x139900
    ctx->pc = 0x1056e0u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 19), 4));
    // 0x1056e4: 0xff050060
    ctx->pc = 0x1056e4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 5));
    // 0x1056e8: 0x270200c0
    ctx->pc = 0x1056e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 192));
    // 0x1056ec: 0xff100078
    ctx->pc = 0x1056ecu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 16));
    // 0x1056f0: 0x155900
    ctx->pc = 0x1056f0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 21), 4));
    // 0x1056f4: 0xff110080
    ctx->pc = 0x1056f4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 17));
    // 0x1056f8: 0x2e94821
    ctx->pc = 0x1056f8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
    // 0x1056fc: 0xff120088
    ctx->pc = 0x1056fcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 18));
    // 0x105700: 0x270500e0
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 224));
    // 0x105704: 0xaf1400a0
    ctx->pc = 0x105704u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 20));
    // 0x105708: 0x27070100
    ctx->pc = 0x105708u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 24), 256));
    // 0x10570c: 0xff0d0068
    ctx->pc = 0x10570cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 13));
    // 0x105710: 0x3c0c7000
    ctx->pc = 0x105710u;
    SET_GPR_S32(ctx, 12, ((uint32_t)28672 << 16));
    // 0x105714: 0xff0e0070
    ctx->pc = 0x105714u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 14));
    // 0x105718: 0x202d
    ctx->pc = 0x105718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10571c: 0xff000048
    ctx->pc = 0x10571cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x105720: 0xaf000090
    ctx->pc = 0x105720u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 144), GPR_U32(ctx, 0));
    // 0x105724: 0xaf000094
    ctx->pc = 0x105724u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 148), GPR_U32(ctx, 0));
    // 0x105728: 0xacc0000c
    ctx->pc = 0x105728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x10572c: 0xaccf0004
    ctx->pc = 0x10572cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 15));
    // 0x105730: 0xacc80008
    ctx->pc = 0x105730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x105734: 0xaf1300b0
    ctx->pc = 0x105734u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 19));
    // 0x105738: 0xaf0000b4
    ctx->pc = 0x105738u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 180), GPR_U32(ctx, 0));
    // 0x10573c: 0xaf0a00c0
    ctx->pc = 0x10573cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 10));
    // 0x105740: 0xac4f0004
    ctx->pc = 0x105740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 15));
    // 0x105744: 0xac40000c
    ctx->pc = 0x105744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x105748: 0xac480008
    ctx->pc = 0x105748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x10574c: 0xaf1400e0
    ctx->pc = 0x10574cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 20));
    // 0x105750: 0x700014a9
    ctx->pc = 0x105750u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x105754: 0xaf0000d0
    ctx->pc = 0x105754u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 0));
    // 0x105758: 0xaf0b00d4
    ctx->pc = 0x105758u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 212), GPR_U32(ctx, 11));
    // 0x10575c: 0xaca0000c
    ctx->pc = 0x10575cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x105760: 0xaca90004
    ctx->pc = 0x105760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x105764: 0xaca80008
    ctx->pc = 0x105764u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x105768: 0xaf1300f0
    ctx->pc = 0x105768u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 19));
    // 0x10576c: 0xaf0b00f4
    ctx->pc = 0x10576cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 244), GPR_U32(ctx, 11));
    // 0x105770: 0xaf0a0100
    ctx->pc = 0x105770u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 10));
    // 0x105774: 0xace90004
    ctx->pc = 0x105774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x105778: 0xace80008
    ctx->pc = 0x105778u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x10577c: 0xace0000c
    ctx->pc = 0x10577cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x105780: 0x7f020110
    ctx->pc = 0x105780u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 272), GPR_VEC(ctx, 2));
    // 0x105784: 0x8f020000
    ctx->pc = 0x105784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x105788: 0xaf0c0110
    ctx->pc = 0x105788u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 12));
    // 0x10578c: 0x34420010
    ctx->pc = 0x10578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)16);
    // 0x105790: 0xc043948
    ctx->pc = 0x105790u;
    SET_GPR_U32(ctx, 31, 0x105798u);
    ctx->pc = 0x105794u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105798u; }
    }
    if (ctx->pc != 0x105798u) { return; }
    ctx->pc = 0x105798u;
    // 0x105798: 0x202d
    ctx->pc = 0x105798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10579c: 0xc043322
    ctx->pc = 0x10579Cu;
    SET_GPR_U32(ctx, 31, 0x1057A4u);
    ctx->pc = 0x1057A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057A4u; }
    }
    if (ctx->pc != 0x1057A4u) { return; }
    ctx->pc = 0x1057A4u;
    // 0x1057a4: 0x8f848490
    ctx->pc = 0x1057a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057a8: 0x282d
    ctx->pc = 0x1057a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057ac: 0xc04372a
    ctx->pc = 0x1057ACu;
    SET_GPR_U32(ctx, 31, 0x1057B4u);
    ctx->pc = 0x1057B0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057B4u; }
    }
    if (ctx->pc != 0x1057B4u) { return; }
    ctx->pc = 0x1057B4u;
    // 0x1057b4: 0x8f8382b8
    ctx->pc = 0x1057b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1057b8: 0x3c050fff
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x1057bc: 0x34a5ffff
    ctx->pc = 0x1057bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x1057c0: 0x8f848490
    ctx->pc = 0x1057c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057c4: 0xc0435d6
    ctx->pc = 0x1057C4u;
    SET_GPR_U32(ctx, 31, 0x1057CCu);
    ctx->pc = 0x1057C8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057CCu; }
    }
    if (ctx->pc != 0x1057CCu) { return; }
    ctx->pc = 0x1057CCu;
    // 0x1057cc: 0x202d
    ctx->pc = 0x1057ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d0: 0xc043322
    ctx->pc = 0x1057D0u;
    SET_GPR_U32(ctx, 31, 0x1057D8u);
    ctx->pc = 0x1057D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1057D8u; }
    }
    if (ctx->pc != 0x1057D8u) { return; }
    ctx->pc = 0x1057D8u;
    // 0x1057d8: 0x8f848490
    ctx->pc = 0x1057d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1057dc: 0x282d
    ctx->pc = 0x1057dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e0: 0xdfbf0080
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1057e4: 0x302d
    ctx->pc = 0x1057e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057e8: 0xdfb70070
    ctx->pc = 0x1057e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1057ec: 0xdfb60060
    ctx->pc = 0x1057ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1057f0: 0xdfb50050
    ctx->pc = 0x1057f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1057f4: 0xdfb40040
    ctx->pc = 0x1057f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1057f8: 0xdfb30030
    ctx->pc = 0x1057f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1057fc: 0xdfb20020
    ctx->pc = 0x1057fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105800: 0xdfb10010
    ctx->pc = 0x105800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105804: 0xdfb00000
    ctx->pc = 0x105804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105808: 0x804372a
    ctx->pc = 0x105808u;
    ctx->pc = 0x10580Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x105810u;
}
