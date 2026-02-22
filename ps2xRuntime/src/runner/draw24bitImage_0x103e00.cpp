#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>

// Function: draw24bitImage
// Address: 0x103e00 - 0x1040a4
void draw24bitImage_0x103e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    static int s_callCount = 0;
    ++s_callCount;

    ctx->pc = 0x103e00u;

    // 0x103e00: 0x27bdff60
    ctx->pc = 0x103e00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x103e04: 0x8f8282b4
    ctx->pc = 0x103e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x103e08: 0xffbe0080
    ctx->pc = 0x103e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x103e0c: 0xffb70070
    ctx->pc = 0x103e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x103e10: 0x100f02d
    ctx->pc = 0x103e10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e14: 0xffb60060
    ctx->pc = 0x103e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x103e18: 0xe0b82d
    ctx->pc = 0x103e18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e1c: 0xffb40040
    ctx->pc = 0x103e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x103e20: 0xc0b02d
    ctx->pc = 0x103e20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e24: 0xffb20020
    ctx->pc = 0x103e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x103e28: 0xa0a02d
    ctx->pc = 0x103e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e2c: 0xffb10010
    ctx->pc = 0x103e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x103e30: 0x140902d
    ctx->pc = 0x103e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e34: 0xffbf0090
    ctx->pc = 0x103e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x103e38: 0x120882d
    ctx->pc = 0x103e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e3c: 0xffb50050
    ctx->pc = 0x103e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x103e40: 0xffb30030
    ctx->pc = 0x103e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    if (s_callCount <= 5 || (s_callCount % 200) == 0) {
        std::fprintf(stderr, "[draw24bitImage #%d] imgId(r4)=0x%x cached(r2)=0x%x  w(r5/s20)=%d h(r6/s22)=%d  r7=%d r8=0x%x scaleX(r9/s17)=%d scaleY(r10/s18)=%d r11=%d\n",
                     s_callCount, GPR_U32(ctx, 4), GPR_U32(ctx, 2),
                     GPR_S32(ctx, 5), GPR_S32(ctx, 6),
                     GPR_S32(ctx, 7), GPR_U32(ctx, 8),
                     GPR_S32(ctx, 9), GPR_S32(ctx, 10), GPR_S32(ctx, 11));
    }
    // 0x103e44: 0x10820005
    ctx->pc = 0x103E44u;
    {
        const bool branch_taken_0x103e44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x103E48u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (s_callCount <= 5 || (s_callCount % 200) == 0) {
            std::fprintf(stderr, "[draw24bitImage #%d] %s image (imgId %s cached)\n",
                         s_callCount,
                         branch_taken_0x103e44 ? "REUSING" : "LOADING",
                         branch_taken_0x103e44 ? "==" : "!=");
        }
        if (branch_taken_0x103e44) {
            ctx->pc = 0x103E5Cu;
            goto label_103e5c;
        }
    }
    ctx->pc = 0x103E4Cu;
    // 0x103e4c: 0x24052b00
    ctx->pc = 0x103e4cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x103e50: 0x280302d
    ctx->pc = 0x103e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e54: 0xc040d1c
    ctx->pc = 0x103E54u;
    SET_GPR_U32(ctx, 31, 0x103E5Cu);
    ctx->pc = 0x103E58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x103470u;
    {
        const uint32_t __entryPc = ctx->pc;
        load24bitImage_0x103470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103E5Cu; }
    }
    if (ctx->pc != 0x103E5Cu) { return; }
    ctx->pc = 0x103E5Cu;
label_103e5c:
    // 0x103e5c: 0x8f8282b8
    ctx->pc = 0x103e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103e60: 0x70001ca9
    ctx->pc = 0x103e60u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103e64: 0xaf8082b4
    ctx->pc = 0x103e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 0));
    // 0x103e68: 0x3c071000
    ctx->pc = 0x103e68u;
    SET_GPR_S32(ctx, 7, ((uint32_t)4096 << 16));
    // 0x103e6c: 0x7c430000
    ctx->pc = 0x103e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x103e70: 0x3c061000
    ctx->pc = 0x103e70u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x103e74: 0x6303c
    ctx->pc = 0x103e74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x103e78: 0x34c60007
    ctx->pc = 0x103e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)7);
    // 0x103e7c: 0x2405000e
    ctx->pc = 0x103e7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x103e80: 0x2403003f
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x103e84: 0x2c0202d
    ctx->pc = 0x103e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103e88: 0xac470000
    ctx->pc = 0x103e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x103e8c: 0xfc430028
    ctx->pc = 0x103e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
    // 0x103e90: 0xfc460010
    ctx->pc = 0x103e90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x103e94: 0xfc450018
    ctx->pc = 0x103e94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x103e98: 0xc040a9e
    ctx->pc = 0x103E98u;
    SET_GPR_U32(ctx, 31, 0x103EA0u);
    ctx->pc = 0x103E9Cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    ctx->pc = 0x102A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EA0u; }
    }
    if (ctx->pc != 0x103EA0u) { return; }
    ctx->pc = 0x103EA0u;
    // 0x103ea0: 0x40802d
    ctx->pc = 0x103ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ea4: 0xc040a9e
    ctx->pc = 0x103EA4u;
    SET_GPR_U32(ctx, 31, 0x103EACu);
    ctx->pc = 0x103EA8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        power2_0x102a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103EACu; }
    }
    if (ctx->pc != 0x103EACu) { return; }
    ctx->pc = 0x103EACu;
    // 0x103eac: 0x2403ffff
    ctx->pc = 0x103eacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103eb0: 0x2684003f
    ctx->pc = 0x103eb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 63));
    // 0x103eb4: 0x74182a
    ctx->pc = 0x103eb4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 20)));
    // 0x103eb8: 0x283200b
    ctx->pc = 0x103eb8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 20));
    // 0x103ebc: 0x42183
    ctx->pc = 0x103ebcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x103ec0: 0x216b8
    ctx->pc = 0x103ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x103ec4: 0x1087b8
    ctx->pc = 0x103ec4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x103ec8: 0x423b8
    ctx->pc = 0x103ec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x103ecc: 0x34038000
    ctx->pc = 0x103eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)32768);
    // 0x103ed0: 0x31bbc
    ctx->pc = 0x103ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x103ed4: 0x2028025
    ctx->pc = 0x103ed4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x103ed8: 0x832025
    ctx->pc = 0x103ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x103edc: 0x902025
    ctx->pc = 0x103edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x103ee0: 0x24020004
    ctx->pc = 0x103ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x103ee4: 0x21438
    ctx->pc = 0x103ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x103ee8: 0x34420010
    ctx->pc = 0x103ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)16);
    // 0x103eec: 0x21438
    ctx->pc = 0x103eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x103ef0: 0x34422b00
    ctx->pc = 0x103ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)11008);
    // 0x103ef4: 0x8f9882b8
    ctx->pc = 0x103ef4u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x103ef8: 0x822025
    ctx->pc = 0x103ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x103efc: 0x115043
    ctx->pc = 0x103efcu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 17), 1));
    // 0x103f00: 0x124843
    ctx->pc = 0x103f00u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 18), 1));
    // 0x103f04: 0x2eaa823
    ctx->pc = 0x103f04u;
    SET_GPR_U32(ctx, 21, SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x103f08: 0x24020006
    ctx->pc = 0x103f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x103f0c: 0x24050154
    ctx->pc = 0x103f0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 340));
    // 0x103f10: 0x24070044
    ctx->pc = 0x103f10u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 68));
    // 0x103f14: 0x240b0042
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 66));
    // 0x103f18: 0x3c0c7f7f
    ctx->pc = 0x103f18u;
    SET_GPR_S32(ctx, 12, ((uint32_t)32639 << 16));
    // 0x103f1c: 0x358c7f7f
    ctx->pc = 0x103f1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)32639);
    // 0x103f20: 0x240d0001
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103f24: 0x240e0047
    ctx->pc = 0x103f24u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 71));
    // 0x103f28: 0x340f807f
    ctx->pc = 0x103f28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)32895);
    // 0x103f2c: 0x2411003b
    ctx->pc = 0x103f2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 59));
    // 0x103f30: 0x3c128000
    ctx->pc = 0x103f30u;
    SET_GPR_S32(ctx, 18, ((uint32_t)32768 << 16));
    // 0x103f34: 0x12903c
    ctx->pc = 0x103f34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x103f38: 0x36528001
    ctx->pc = 0x103f38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)32769);
    // 0x103f3c: 0x3c134343
    ctx->pc = 0x103f3cu;
    SET_GPR_S32(ctx, 19, ((uint32_t)17219 << 16));
    // 0x103f40: 0x36734343
    ctx->pc = 0x103f40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)17219);
    // 0x103f44: 0xff040030
    ctx->pc = 0x103f44u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 4));
    // 0x103f48: 0x3c98023
    ctx->pc = 0x103f48u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x103f4c: 0xff020038
    ctx->pc = 0x103f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x103f50: 0x3c080010
    ctx->pc = 0x103f50u;
    SET_GPR_S32(ctx, 8, ((uint32_t)16 << 16));
    // 0x103f54: 0xff050040
    ctx->pc = 0x103f54u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 5));
    // 0x103f58: 0x270600b0
    ctx->pc = 0x103f58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 24), 176));
    // 0x103f5c: 0xff070050
    ctx->pc = 0x103f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 7));
    // 0x103f60: 0x2ea5021
    ctx->pc = 0x103f60u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 10)));
    // 0x103f64: 0xff0b0058
    ctx->pc = 0x103f64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 11));
    // 0x103f68: 0x14a100
    ctx->pc = 0x103f68u;
    SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 20), 4));
    // 0x103f6c: 0xff0c0060
    ctx->pc = 0x103f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 12));
    // 0x103f70: 0x270200d0
    ctx->pc = 0x103f70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 208));
    // 0x103f74: 0xff110088
    ctx->pc = 0x103f74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 17));
    // 0x103f78: 0x165900
    ctx->pc = 0x103f78u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 22), 4));
    // 0x103f7c: 0xff120090
    ctx->pc = 0x103f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 18));
    // 0x103f80: 0x3c94821
    ctx->pc = 0x103f80u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
    // 0x103f84: 0xff130098
    ctx->pc = 0x103f84u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 19));
    // 0x103f88: 0x270500f0
    ctx->pc = 0x103f88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 240));
    // 0x103f8c: 0xaf1500b0
    ctx->pc = 0x103f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 21));
    // 0x103f90: 0x27070110
    ctx->pc = 0x103f90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 24), 272));
    // 0x103f94: 0xff0d0068
    ctx->pc = 0x103f94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 13));
    // 0x103f98: 0x3c0c7000
    ctx->pc = 0x103f98u;
    SET_GPR_S32(ctx, 12, ((uint32_t)28672 << 16));
    // 0x103f9c: 0xff0e0078
    ctx->pc = 0x103f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 14));
    // 0x103fa0: 0x202d
    ctx->pc = 0x103fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103fa4: 0xff0f0080
    ctx->pc = 0x103fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 15));
    // 0x103fa8: 0xff000048
    ctx->pc = 0x103fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x103fac: 0xff000070
    ctx->pc = 0x103facu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 0));
    // 0x103fb0: 0xaf0000a0
    ctx->pc = 0x103fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 0));
    // 0x103fb4: 0xaf0000a4
    ctx->pc = 0x103fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 164), GPR_U32(ctx, 0));
    // 0x103fb8: 0xacd00004
    ctx->pc = 0x103fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x103fbc: 0xacc0000c
    ctx->pc = 0x103fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x103fc0: 0xacc80008
    ctx->pc = 0x103fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x103fc4: 0xaf1400c0
    ctx->pc = 0x103fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 20));
    // 0x103fc8: 0xaf0000c4
    ctx->pc = 0x103fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 196), GPR_U32(ctx, 0));
    // 0x103fcc: 0xaf0a00d0
    ctx->pc = 0x103fccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 10));
    // 0x103fd0: 0xac500004
    ctx->pc = 0x103fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x103fd4: 0xac40000c
    ctx->pc = 0x103fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103fd8: 0xac480008
    ctx->pc = 0x103fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x103fdc: 0xaf1500f0
    ctx->pc = 0x103fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 21));
    // 0x103fe0: 0x700014a9
    ctx->pc = 0x103fe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103fe4: 0xaf0000e0
    ctx->pc = 0x103fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 0));
    // 0x103fe8: 0xaf0b00e4
    ctx->pc = 0x103fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 228), GPR_U32(ctx, 11));
    // 0x103fec: 0xaca0000c
    ctx->pc = 0x103fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103ff0: 0xaca90004
    ctx->pc = 0x103ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x103ff4: 0xaca80008
    ctx->pc = 0x103ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x103ff8: 0xaf140100
    ctx->pc = 0x103ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 20));
    // 0x103ffc: 0xaf0b0104
    ctx->pc = 0x103ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 260), GPR_U32(ctx, 11));
    // 0x104000: 0xaf0a0110
    ctx->pc = 0x104000u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 10));
    // 0x104004: 0xace90004
    ctx->pc = 0x104004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x104008: 0xace80008
    ctx->pc = 0x104008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x10400c: 0xace0000c
    ctx->pc = 0x10400cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x104010: 0x7f020120
    ctx->pc = 0x104010u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 288), GPR_VEC(ctx, 2));
    // 0x104014: 0x8f020000
    ctx->pc = 0x104014u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x104018: 0xaf0c0120
    ctx->pc = 0x104018u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 288), GPR_U32(ctx, 12));
    // 0x10401c: 0x34420011
    ctx->pc = 0x10401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)17);
    // 0x104020: 0xc043948
    ctx->pc = 0x104020u;
    SET_GPR_U32(ctx, 31, 0x104028u);
    ctx->pc = 0x104024u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104028u; }
    }
    if (ctx->pc != 0x104028u) { return; }
    ctx->pc = 0x104028u;
    // 0x104028: 0x202d
    ctx->pc = 0x104028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10402c: 0xc043322
    ctx->pc = 0x10402Cu;
    SET_GPR_U32(ctx, 31, 0x104034u);
    ctx->pc = 0x104030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104034u; }
    }
    if (ctx->pc != 0x104034u) { return; }
    ctx->pc = 0x104034u;
    // 0x104034: 0x8f848490
    ctx->pc = 0x104034u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x104038: 0x282d
    ctx->pc = 0x104038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10403c: 0xc04372a
    ctx->pc = 0x10403Cu;
    SET_GPR_U32(ctx, 31, 0x104044u);
    ctx->pc = 0x104040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104044u; }
    }
    if (ctx->pc != 0x104044u) { return; }
    ctx->pc = 0x104044u;
    // 0x104044: 0x8f8382b8
    ctx->pc = 0x104044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x104048: 0x3c050fff
    ctx->pc = 0x104048u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x10404c: 0x34a5ffff
    ctx->pc = 0x10404cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x104050: 0x8f848490
    ctx->pc = 0x104050u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x104054: 0xc0435d6
    ctx->pc = 0x104054u;
    SET_GPR_U32(ctx, 31, 0x10405Cu);
    ctx->pc = 0x104058u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    if (s_callCount <= 10 || (s_callCount % 200) == 0) {
        std::fprintf(stderr, "[draw24bitImage #%d] 2nd sceDmaSend: ch=0x%x payload=0x%x (r3=0x%x)\n",
                     s_callCount, GPR_U32(ctx, 4), GPR_U32(ctx, 5), GPR_U32(ctx, 3));
    }
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10405Cu; }
    }
    if (ctx->pc != 0x10405Cu) { return; }
    ctx->pc = 0x10405Cu;
    // 0x10405c: 0x202d
    ctx->pc = 0x10405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104060: 0xc043322
    ctx->pc = 0x104060u;
    SET_GPR_U32(ctx, 31, 0x104068u);
    ctx->pc = 0x104064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104068u; }
    }
    if (ctx->pc != 0x104068u) { return; }
    ctx->pc = 0x104068u;
    // 0x104068: 0x8f848490
    ctx->pc = 0x104068u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x10406c: 0x282d
    ctx->pc = 0x10406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104070: 0xdfbf0090
    ctx->pc = 0x104070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104074: 0x302d
    ctx->pc = 0x104074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104078: 0xdfbe0080
    ctx->pc = 0x104078u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10407c: 0xdfb70070
    ctx->pc = 0x10407cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104080: 0xdfb60060
    ctx->pc = 0x104080u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x104084: 0xdfb50050
    ctx->pc = 0x104084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x104088: 0xdfb40040
    ctx->pc = 0x104088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10408c: 0xdfb30030
    ctx->pc = 0x10408cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104090: 0xdfb20020
    ctx->pc = 0x104090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104094: 0xdfb10010
    ctx->pc = 0x104094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104098: 0xdfb00000
    ctx->pc = 0x104098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10409c: 0x804372a
    ctx->pc = 0x10409Cu;
    ctx->pc = 0x1040A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1040A4u;
}
