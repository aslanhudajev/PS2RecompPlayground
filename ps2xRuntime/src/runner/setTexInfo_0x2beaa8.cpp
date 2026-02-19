#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setTexInfo
// Address: 0x2beaa8 - 0x2bed10
void setTexInfo_0x2beaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2beaa8u;

    // 0x2beaa8: 0x27bdffa0
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2beaac: 0xffbf0050
    ctx->pc = 0x2beaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2beab0: 0xffb40040
    ctx->pc = 0x2beab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2beab4: 0xffb30030
    ctx->pc = 0x2beab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2beab8: 0xffb20020
    ctx->pc = 0x2beab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2beabc: 0xffb10010
    ctx->pc = 0x2beabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2beac0: 0xffb00000
    ctx->pc = 0x2beac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2beac4: 0x80802d
    ctx->pc = 0x2beac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beac8: 0xc0a02d
    ctx->pc = 0x2beac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beacc: 0x3c020036
    ctx->pc = 0x2beaccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2bead0: 0x8c53dee0
    ctx->pc = 0x2bead0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2bead4: 0x8e640038
    ctx->pc = 0x2bead4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x2bead8: 0x51402
    ctx->pc = 0x2bead8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 16));
    // 0x2beadc: 0x21100
    ctx->pc = 0x2beadcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2beae0: 0x821021
    ctx->pc = 0x2beae0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2beae4: 0x8c460004
    ctx->pc = 0x2beae4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2beae8: 0x30a5ffff
    ctx->pc = 0x2beae8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
    // 0x2beaec: 0x51980
    ctx->pc = 0x2beaecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 6));
    // 0x2beaf0: 0x8cc20058
    ctx->pc = 0x2beaf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2beaf4: 0x629021
    ctx->pc = 0x2beaf4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2beaf8: 0x96420008
    ctx->pc = 0x2beaf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2beafc: 0x30420100
    ctx->pc = 0x2beafcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x2beb00: 0x1040000a
    ctx->pc = 0x2BEB00u;
    {
        const bool branch_taken_0x2beb00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEB04u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 176)));
        if (branch_taken_0x2beb00) {
            ctx->pc = 0x2BEB2Cu;
            goto label_2beb2c;
        }
    }
    ctx->pc = 0x2BEB08u;
    // 0x2beb08: 0x8c860004
    ctx->pc = 0x2beb08u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2beb0c: 0x3c020037
    ctx->pc = 0x2beb0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2beb10: 0x8c4485f0
    ctx->pc = 0x2beb10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294936048)));
    // 0x2beb14: 0x41980
    ctx->pc = 0x2beb14u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 6));
    // 0x2beb18: 0x8cc20058
    ctx->pc = 0x2beb18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2beb1c: 0x629021
    ctx->pc = 0x2beb1cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2beb20: 0x8cc20078
    ctx->pc = 0x2beb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2beb24: 0x10000003
    ctx->pc = 0x2BEB24u;
    {
        const bool branch_taken_0x2beb24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEB28u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        if (branch_taken_0x2beb24) {
            ctx->pc = 0x2BEB34u;
            goto label_2beb34;
        }
    }
    ctx->pc = 0x2BEB2Cu;
label_2beb2c:
    // 0x2beb2c: 0x8cc20078
    ctx->pc = 0x2beb2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x2beb30: 0x451021
    ctx->pc = 0x2beb30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2beb34:
    // 0x2beb34: 0x90420000
    ctx->pc = 0x2beb34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2beb38: 0x14400006
    ctx->pc = 0x2BEB38u;
    {
        const bool branch_taken_0x2beb38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BEB3Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 168));
        if (branch_taken_0x2beb38) {
            ctx->pc = 0x2BEB54u;
            goto label_2beb54;
        }
    }
    ctx->pc = 0x2BEB40u;
    // 0x2beb40: 0x3c04003b
    ctx->pc = 0x2beb40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2beb44: 0x24846b28
    ctx->pc = 0x2beb44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27432));
    // 0x2beb48: 0xc0b49a6
    ctx->pc = 0x2BEB48u;
    SET_GPR_U32(ctx, 31, 0x2BEB50u);
    ctx->pc = 0x2BEB4Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BEB50u; }
    }
    if (ctx->pc != 0x2BEB50u) { return; }
    ctx->pc = 0x2BEB50u;
    // 0x2beb50: 0x260500a8
    ctx->pc = 0x2beb50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 168));
label_2beb54:
    // 0x2beb54: 0xb11821
    ctx->pc = 0x2beb54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2beb58: 0x2402003f
    ctx->pc = 0x2beb58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x2beb5c: 0xa0620000
    ctx->pc = 0x2beb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beb60: 0x96470038
    ctx->pc = 0x2beb60u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2beb64: 0x9642003c
    ctx->pc = 0x2beb64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2beb68: 0x2117c
    ctx->pc = 0x2beb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x2beb6c: 0xe2102d
    ctx->pc = 0x2beb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2beb70: 0xde430020
    ctx->pc = 0x2beb70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2beb74: 0x43102d
    ctx->pc = 0x2beb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2beb78: 0x2403ffe7
    ctx->pc = 0x2beb78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x2beb7c: 0x31c38
    ctx->pc = 0x2beb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2beb80: 0x3463ffff
    ctx->pc = 0x2beb80u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2beb84: 0x31c38
    ctx->pc = 0x2beb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2beb88: 0x3463ffff
    ctx->pc = 0x2beb88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2beb8c: 0x431024
    ctx->pc = 0x2beb8cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2beb90: 0xfe020060
    ctx->pc = 0x2beb90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x2beb94: 0x3c030037
    ctx->pc = 0x2beb94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2beb98: 0x24632890
    ctx->pc = 0x2beb98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 10384));
    // 0x2beb9c: 0x96420008
    ctx->pc = 0x2beb9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2beba0: 0x21082
    ctx->pc = 0x2beba0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 2));
    // 0x2beba4: 0x30420003
    ctx->pc = 0x2beba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2beba8: 0x431021
    ctx->pc = 0x2beba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bebac: 0x90440000
    ctx->pc = 0x2bebacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bebb0: 0x8e0200cc
    ctx->pc = 0x2bebb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2bebb4: 0x1044000c
    ctx->pc = 0x2BEBB4u;
    {
        const bool branch_taken_0x2bebb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x2BEBB8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2bebb4) {
            ctx->pc = 0x2BEBE8u;
            goto label_2bebe8;
        }
    }
    ctx->pc = 0x2BEBBCu;
    // 0x2bebbc: 0xae0400cc
    ctx->pc = 0x2bebbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 4));
    // 0x2bebc0: 0x1118c0
    ctx->pc = 0x2bebc0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 3));
    // 0x2bebc4: 0x24620080
    ctx->pc = 0x2bebc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 128));
    // 0x2bebc8: 0x2021021
    ctx->pc = 0x2bebc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2bebcc: 0xae0200d0
    ctx->pc = 0x2bebccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x2bebd0: 0x2031821
    ctx->pc = 0x2bebd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2bebd4: 0xfc640080
    ctx->pc = 0x2bebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 4));
    // 0x2bebd8: 0xb11821
    ctx->pc = 0x2bebd8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2bebdc: 0x24020008
    ctx->pc = 0x2bebdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bebe0: 0xa0620000
    ctx->pc = 0x2bebe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bebe4: 0x26310001
    ctx->pc = 0x2bebe4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2bebe8:
    // 0x2bebe8: 0x92420002
    ctx->pc = 0x2bebe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bebec: 0x10400026
    ctx->pc = 0x2BEBECu;
    {
        const bool branch_taken_0x2bebec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEBF0u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 3));
        if (branch_taken_0x2bebec) {
            ctx->pc = 0x2BEC88u;
            goto label_2bec88;
        }
    }
    ctx->pc = 0x2BEBF4u;
    // 0x2bebf4: 0x24a50080
    ctx->pc = 0x2bebf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x2bebf8: 0x2052821
    ctx->pc = 0x2bebf8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2bebfc: 0x262600a8
    ctx->pc = 0x2bebfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 168));
    // 0x2bec00: 0x2063021
    ctx->pc = 0x2bec00u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2bec04: 0x26310002
    ctx->pc = 0x2bec04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x2bec08: 0x71538
    ctx->pc = 0x2bec08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 20);
    // 0x2bec0c: 0xe21025
    ctx->pc = 0x2bec0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bec10: 0x71a3c
    ctx->pc = 0x2bec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 8));
    // 0x2bec14: 0x431025
    ctx->pc = 0x2bec14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bec18: 0xde440030
    ctx->pc = 0x2bec18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2bec1c: 0x44202d
    ctx->pc = 0x2bec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x2bec20: 0xde430028
    ctx->pc = 0x2bec20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2bec24: 0x43102d
    ctx->pc = 0x2bec24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2bec28: 0xfca20000
    ctx->pc = 0x2bec28u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2bec2c: 0xfca40008
    ctx->pc = 0x2bec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x2bec30: 0x24020034
    ctx->pc = 0x2bec30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 52));
    // 0x2bec34: 0xa0c20000
    ctx->pc = 0x2bec34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec38: 0x24020036
    ctx->pc = 0x2bec38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
    // 0x2bec3c: 0xa0c20001
    ctx->pc = 0x2bec3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bec40: 0x92430002
    ctx->pc = 0x2bec40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bec44: 0x31880
    ctx->pc = 0x2bec44u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bec48: 0x8e640048
    ctx->pc = 0x2bec48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2bec4c: 0x8c820370
    ctx->pc = 0x2bec4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x2bec50: 0x21140
    ctx->pc = 0x2bec50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bec54: 0x621825
    ctx->pc = 0x2bec54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bec58: 0x8c82036c
    ctx->pc = 0x2bec58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x2bec5c: 0x21180
    ctx->pc = 0x2bec5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bec60: 0x621825
    ctx->pc = 0x2bec60u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bec64: 0x8c820368
    ctx->pc = 0x2bec64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x2bec68: 0x214c0
    ctx->pc = 0x2bec68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 19));
    // 0x2bec6c: 0x621825
    ctx->pc = 0x2bec6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2bec70: 0xae030050
    ctx->pc = 0x2bec70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x2bec74: 0x8e620048
    ctx->pc = 0x2bec74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2bec78: 0x8c420364
    ctx->pc = 0x2bec78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 868)));
    // 0x2bec7c: 0x2821021
    ctx->pc = 0x2bec7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2bec80: 0x10000009
    ctx->pc = 0x2BEC80u;
    {
        const bool branch_taken_0x2bec80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BEC84u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x2bec80) {
            ctx->pc = 0x2BECA8u;
            goto label_2beca8;
        }
    }
    ctx->pc = 0x2BEC88u;
label_2bec88:
    // 0x2bec88: 0x8e620048
    ctx->pc = 0x2bec88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2bec8c: 0x8c430370
    ctx->pc = 0x2bec8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x2bec90: 0x31940
    ctx->pc = 0x2bec90u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x2bec94: 0x8c42036c
    ctx->pc = 0x2bec94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x2bec98: 0x30420001
    ctx->pc = 0x2bec98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2bec9c: 0x21180
    ctx->pc = 0x2bec9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x2beca0: 0x621825
    ctx->pc = 0x2beca0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2beca4: 0xae030050
    ctx->pc = 0x2beca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_2beca8:
    // 0x2beca8: 0xae1100b0
    ctx->pc = 0x2beca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 17));
    // 0x2becac: 0x96420008
    ctx->pc = 0x2becacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2becb0: 0x30420040
    ctx->pc = 0x2becb0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2becb4: 0x10400009
    ctx->pc = 0x2BECB4u;
    {
        const bool branch_taken_0x2becb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BECB8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2becb4) {
            ctx->pc = 0x2BECDCu;
            goto label_2becdc;
        }
    }
    ctx->pc = 0x2BECBCu;
    // 0x2becbc: 0xae0200b4
    ctx->pc = 0x2becbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2becc0: 0x96430012
    ctx->pc = 0x2becc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x2becc4: 0x31900
    ctx->pc = 0x2becc4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2becc8: 0x3c02003a
    ctx->pc = 0x2becc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2beccc: 0x24420cb0
    ctx->pc = 0x2becccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x2becd0: 0x621821
    ctx->pc = 0x2becd0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2becd4: 0x10000006
    ctx->pc = 0x2BECD4u;
    {
        const bool branch_taken_0x2becd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BECD8u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
        if (branch_taken_0x2becd4) {
            ctx->pc = 0x2BECF0u;
            goto label_2becf0;
        }
    }
    ctx->pc = 0x2BECDCu;
label_2becdc:
    // 0x2becdc: 0x8e0200e4
    ctx->pc = 0x2becdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x2bece0: 0x10400003
    ctx->pc = 0x2BECE0u;
    {
        const bool branch_taken_0x2bece0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BECE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2bece0) {
            ctx->pc = 0x2BECF0u;
            goto label_2becf0;
        }
    }
    ctx->pc = 0x2BECE8u;
    // 0x2bece8: 0xae0200b4
    ctx->pc = 0x2bece8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2becec: 0xae0000e4
    ctx->pc = 0x2bececu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_2becf0:
    // 0x2becf0: 0xdfbf0050
    ctx->pc = 0x2becf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2becf4: 0xdfb40040
    ctx->pc = 0x2becf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2becf8: 0xdfb30030
    ctx->pc = 0x2becf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2becfc: 0xdfb20020
    ctx->pc = 0x2becfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bed00: 0xdfb10010
    ctx->pc = 0x2bed00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed04: 0xdfb00000
    ctx->pc = 0x2bed04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bed08: 0x3e00008
    ctx->pc = 0x2BED08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BEB2Cu: goto label_2beb2c;
            case 0x2BEB34u: goto label_2beb34;
            case 0x2BEB54u: goto label_2beb54;
            case 0x2BEBE8u: goto label_2bebe8;
            case 0x2BEC88u: goto label_2bec88;
            case 0x2BECA8u: goto label_2beca8;
            case 0x2BECDCu: goto label_2becdc;
            case 0x2BECF0u: goto label_2becf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BED10u;
}
