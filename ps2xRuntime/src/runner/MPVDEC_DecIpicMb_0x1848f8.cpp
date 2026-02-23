#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVDEC_DecIpicMb
// Address: 0x1848f8 - 0x184b9c
void MPVDEC_DecIpicMb_0x1848f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVDEC_DecIpicMb");


    ctx->pc = 0x1848f8u;

label_1848f8:
    // 0x1848f8: 0x27bdffb0
    ctx->pc = 0x1848f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_1848fc:
    // 0x1848fc: 0xffb30030
    ctx->pc = 0x1848fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_184900:
    // 0x184900: 0xffb20020
    ctx->pc = 0x184900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_184904:
    // 0x184904: 0xc0982d
    ctx->pc = 0x184904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184908:
    // 0x184908: 0xffb10010
    ctx->pc = 0x184908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_18490c:
    // 0x18490c: 0xa0902d
    ctx->pc = 0x18490cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184910:
    // 0x184910: 0xffb00000
    ctx->pc = 0x184910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_184914:
    // 0x184914: 0xe0882d
    ctx->pc = 0x184914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_184918:
    // 0x184918: 0xffbf0040
    ctx->pc = 0x184918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18491c:
    // 0x18491c: 0x1000007b
label_184920:
    if (ctx->pc == 0x184920u) {
        ctx->pc = 0x184920u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184924u;
        goto label_184924;
    }
    ctx->pc = 0x18491Cu;
    {
        const bool branch_taken_0x18491c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184920u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18491c) {
            ctx->pc = 0x184B0Cu;
            goto label_184b0c;
        }
    }
    ctx->pc = 0x184924u;
label_184924:
    // 0x184924: 0x0
    ctx->pc = 0x184924u;
    // NOP
label_184928:
    // 0x184928: 0x3c030024
    ctx->pc = 0x184928u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_18492c:
    // 0x18492c: 0x3c0affff
    ctx->pc = 0x18492cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)65535 << 16));
label_184930:
    // 0x184930: 0x8c4c1a28
    ctx->pc = 0x184930u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 6696)));
label_184934:
    // 0x184934: 0x8c6b1a2c
    ctx->pc = 0x184934u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 6700)));
label_184938:
    // 0x184938: 0x24190034
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 52));
label_18493c:
    // 0x18493c: 0x8e0d029c
    ctx->pc = 0x18493cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_184940:
    // 0x184940: 0x24180022
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 34));
label_184944:
    // 0x184944: 0x240e0023
    ctx->pc = 0x184944u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 35));
label_184948:
    // 0x184948: 0x240f0024
    ctx->pc = 0x184948u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 36));
label_18494c:
    // 0x18494c: 0x1000000b
label_184950:
    if (ctx->pc == 0x184950u) {
        ctx->pc = 0x184950u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 65534));
        ctx->pc = 0x184954u;
        goto label_184954;
    }
    ctx->pc = 0x18494Cu;
    {
        const bool branch_taken_0x18494c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184950u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 65534));
        if (branch_taken_0x18494c) {
            ctx->pc = 0x18497Cu;
            goto label_18497c;
        }
    }
    ctx->pc = 0x184954u;
label_184954:
    // 0x184954: 0x0
    ctx->pc = 0x184954u;
    // NOP
label_184958:
    // 0x184958: 0x42282
    ctx->pc = 0x184958u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 10));
label_18495c:
    // 0x18495c: 0x8e0302a0
    ctx->pc = 0x18495cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_184960:
    // 0x184960: 0x451021
    ctx->pc = 0x184960u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_184964:
    // 0x184964: 0xae0402a4
    ctx->pc = 0x184964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 4));
label_184968:
    // 0x184968: 0x62182a
    ctx->pc = 0x184968u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_18496c:
    // 0x18496c: 0x4d2023
    ctx->pc = 0x18496cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_184970:
    // 0x184970: 0x143200b
    ctx->pc = 0x184970u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 10));
label_184974:
    // 0x184974: 0x10000034
label_184978:
    if (ctx->pc == 0x184978u) {
        ctx->pc = 0x184978u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x18497Cu;
        goto label_18497c;
    }
    ctx->pc = 0x184974u;
    {
        const bool branch_taken_0x184974 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184978u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x184974) {
            ctx->pc = 0x184A48u;
            goto label_184a48;
        }
    }
    ctx->pc = 0x18497Cu;
label_18497c:
    // 0x18497c: 0x28e20015
    ctx->pc = 0x18497cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 21));
label_184980:
    // 0x184980: 0x14400004
label_184984:
    if (ctx->pc == 0x184984u) {
        ctx->pc = 0x184984u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 20));
        ctx->pc = 0x184988u;
        goto label_184988;
    }
    ctx->pc = 0x184980u;
    {
        const bool branch_taken_0x184980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184984u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 20));
        if (branch_taken_0x184980) {
            ctx->pc = 0x184994u;
            goto label_184994;
        }
    }
    ctx->pc = 0x184988u;
label_184988:
    // 0x184988: 0x3271023
    ctx->pc = 0x184988u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 7)));
label_18498c:
    // 0x18498c: 0x461006
    ctx->pc = 0x18498cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_184990:
    // 0x184990: 0x621825
    ctx->pc = 0x184990u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184994:
    // 0x184994: 0x31202
    ctx->pc = 0x184994u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 8));
label_184998:
    // 0x184998: 0x54400004
label_18499c:
    if (ctx->pc == 0x18499Cu) {
        ctx->pc = 0x18499Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x1849A0u;
        goto label_1849a0;
    }
    ctx->pc = 0x184998u;
    {
        const bool branch_taken_0x184998 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184998) {
            ctx->pc = 0x18499Cu;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
            ctx->pc = 0x1849ACu;
            goto label_1849ac;
        }
    }
    ctx->pc = 0x1849A0u;
label_1849a0:
    // 0x1849a0: 0x31040
    ctx->pc = 0x1849a0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_1849a4:
    // 0x1849a4: 0x10000003
label_1849a8:
    if (ctx->pc == 0x1849A8u) {
        ctx->pc = 0x1849A8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->pc = 0x1849ACu;
        goto label_1849ac;
    }
    ctx->pc = 0x1849A4u;
    {
        const bool branch_taken_0x1849a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1849A8u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        if (branch_taken_0x1849a4) {
            ctx->pc = 0x1849B4u;
            goto label_1849b4;
        }
    }
    ctx->pc = 0x1849ACu;
label_1849ac:
    // 0x1849ac: 0x21040
    ctx->pc = 0x1849acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1849b0:
    // 0x1849b0: 0x4b1021
    ctx->pc = 0x1849b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1849b4:
    // 0x1849b4: 0x84440000
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1849b8:
    // 0x1849b8: 0x3085000f
    ctx->pc = 0x1849b8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 4), 15));
label_1849bc:
    // 0x1849bc: 0xe53821
    ctx->pc = 0x1849bcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1849c0:
    // 0x1849c0: 0x28e20020
    ctx->pc = 0x1849c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 32));
label_1849c4:
    // 0x1849c4: 0x14400011
label_1849c8:
    if (ctx->pc == 0x1849C8u) {
        ctx->pc = 0x1849C8u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x1849CCu;
        goto label_1849cc;
    }
    ctx->pc = 0x1849C4u;
    {
        const bool branch_taken_0x1849c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1849C8u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x1849c4) {
            ctx->pc = 0x184A0Cu;
            goto label_184a0c;
        }
    }
    ctx->pc = 0x1849CCu;
label_1849cc:
    // 0x1849cc: 0x24e7ffe0
    ctx->pc = 0x1849ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967264));
label_1849d0:
    // 0x1849d0: 0xe64804
    ctx->pc = 0x1849d0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
label_1849d4:
    // 0x1849d4: 0x81060000
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1849d8:
    // 0x1849d8: 0x25080001
    ctx->pc = 0x1849d8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1849dc:
    // 0x1849dc: 0x91020000
    ctx->pc = 0x1849dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1849e0:
    // 0x1849e0: 0x63200
    ctx->pc = 0x1849e0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1849e4:
    // 0x1849e4: 0x25080001
    ctx->pc = 0x1849e4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1849e8:
    // 0x1849e8: 0xc23025
    ctx->pc = 0x1849e8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1849ec:
    // 0x1849ec: 0x91030000
    ctx->pc = 0x1849ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1849f0:
    // 0x1849f0: 0x25080001
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_1849f4:
    // 0x1849f4: 0x63200
    ctx->pc = 0x1849f4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_1849f8:
    // 0x1849f8: 0x91020000
    ctx->pc = 0x1849f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1849fc:
    // 0x1849fc: 0xc33025
    ctx->pc = 0x1849fcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_184a00:
    // 0x184a00: 0x63200
    ctx->pc = 0x184a00u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_184a04:
    // 0x184a04: 0x25080001
    ctx->pc = 0x184a04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_184a08:
    // 0x184a08: 0xc23025
    ctx->pc = 0x184a08u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_184a0c:
    // 0x184a0c: 0x41082
    ctx->pc = 0x184a0cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 4), 2));
label_184a10:
    // 0x184a10: 0x304200ff
    ctx->pc = 0x184a10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_184a14:
    // 0x184a14: 0x22882
    ctx->pc = 0x184a14u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 2), 2));
label_184a18:
    // 0x184a18: 0x10b8ffd9
label_184a1c:
    if (ctx->pc == 0x184A1Cu) {
        ctx->pc = 0x184A1Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 21));
        ctx->pc = 0x184A20u;
        goto label_184a20;
    }
    ctx->pc = 0x184A18u;
    {
        const bool branch_taken_0x184a18 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 24));
        ctx->pc = 0x184A1Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 21));
        if (branch_taken_0x184a18) {
            ctx->pc = 0x184980u;
            goto label_184980;
        }
    }
    ctx->pc = 0x184A20u;
label_184a20:
    // 0x184a20: 0x14ae0005
label_184a24:
    if (ctx->pc == 0x184A24u) {
        ctx->pc = 0x184A28u;
        goto label_184a28;
    }
    ctx->pc = 0x184A20u;
    {
        const bool branch_taken_0x184a20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 14));
        if (branch_taken_0x184a20) {
            ctx->pc = 0x184A38u;
            goto label_184a38;
        }
    }
    ctx->pc = 0x184A28u;
label_184a28:
    // 0x184a28: 0x8e02029c
    ctx->pc = 0x184a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_184a2c:
    // 0x184a2c: 0x24420021
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 33));
label_184a30:
    // 0x184a30: 0x1000ffd2
label_184a34:
    if (ctx->pc == 0x184A34u) {
        ctx->pc = 0x184A34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x184A38u;
        goto label_184a38;
    }
    ctx->pc = 0x184A30u;
    {
        const bool branch_taken_0x184a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184A34u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x184a30) {
            ctx->pc = 0x18497Cu;
            goto label_18497c;
        }
    }
    ctx->pc = 0x184A38u;
label_184a38:
    // 0x184a38: 0x54afffc7
label_184a3c:
    if (ctx->pc == 0x184A3Cu) {
        ctx->pc = 0x184A3Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
        ctx->pc = 0x184A40u;
        goto label_184a40;
    }
    ctx->pc = 0x184A38u;
    {
        const bool branch_taken_0x184a38 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 15));
        if (branch_taken_0x184a38) {
            ctx->pc = 0x184A3Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 668)));
            ctx->pc = 0x184958u;
            goto label_184958;
        }
    }
    ctx->pc = 0x184A40u;
label_184a40:
    // 0x184a40: 0x3c04ffff
    ctx->pc = 0x184a40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_184a44:
    // 0x184a44: 0x3484fffe
    ctx->pc = 0x184a44u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65534));
label_184a48:
    // 0x184a48: 0x3c02ffff
    ctx->pc = 0x184a48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_184a4c:
    // 0x184a4c: 0x3442fffe
    ctx->pc = 0x184a4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
label_184a50:
    // 0x184a50: 0x1082003c
label_184a54:
    if (ctx->pc == 0x184A54u) {
        ctx->pc = 0x184A54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 7));
        ctx->pc = 0x184A58u;
        goto label_184a58;
    }
    ctx->pc = 0x184A50u;
    {
        const bool branch_taken_0x184a50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x184A54u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 7));
        if (branch_taken_0x184a50) {
            ctx->pc = 0x184B44u;
            goto label_184b44;
        }
    }
    ctx->pc = 0x184A58u;
label_184a58:
    // 0x184a58: 0x8e0202a4
    ctx->pc = 0x184a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_184a5c:
    // 0x184a5c: 0x30420010
    ctx->pc = 0x184a5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_184a60:
    // 0x184a60: 0x10400020
label_184a64:
    if (ctx->pc == 0x184A64u) {
        ctx->pc = 0x184A64u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 27));
        ctx->pc = 0x184A68u;
        goto label_184a68;
    }
    ctx->pc = 0x184A60u;
    {
        const bool branch_taken_0x184a60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184A64u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 27));
        if (branch_taken_0x184a60) {
            ctx->pc = 0x184AE4u;
            goto label_184ae4;
        }
    }
    ctx->pc = 0x184A68u;
label_184a68:
    // 0x184a68: 0x5440001b
label_184a6c:
    if (ctx->pc == 0x184A6Cu) {
        ctx->pc = 0x184A6Cu;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 27));
        ctx->pc = 0x184A70u;
        goto label_184a70;
    }
    ctx->pc = 0x184A68u;
    {
        const bool branch_taken_0x184a68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184a68) {
            ctx->pc = 0x184A6Cu;
            SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 27));
            ctx->pc = 0x184AD8u;
            goto label_184ad8;
        }
    }
    ctx->pc = 0x184A70u;
label_184a70:
    // 0x184a70: 0x24e7ffe5
    ctx->pc = 0x184a70u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967269));
label_184a74:
    // 0x184a74: 0x10e00007
label_184a78:
    if (ctx->pc == 0x184A78u) {
        ctx->pc = 0x184A78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x184A7Cu;
        goto label_184a7c;
    }
    ctx->pc = 0x184A74u;
    {
        const bool branch_taken_0x184a74 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x184A78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x184a74) {
            ctx->pc = 0x184A94u;
            goto label_184a94;
        }
    }
    ctx->pc = 0x184A7Cu;
label_184a7c:
    // 0x184a7c: 0x471023
    ctx->pc = 0x184a7cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_184a80:
    // 0x184a80: 0x461006
    ctx->pc = 0x184a80u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_184a84:
    // 0x184a84: 0x1224825
    ctx->pc = 0x184a84u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_184a88:
    // 0x184a88: 0x926c2
    ctx->pc = 0x184a88u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 27));
label_184a8c:
    // 0x184a8c: 0x10000003
label_184a90:
    if (ctx->pc == 0x184A90u) {
        ctx->pc = 0x184A90u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        ctx->pc = 0x184A94u;
        goto label_184a94;
    }
    ctx->pc = 0x184A8Cu;
    {
        const bool branch_taken_0x184a8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184A90u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
        if (branch_taken_0x184a8c) {
            ctx->pc = 0x184A9Cu;
            goto label_184a9c;
        }
    }
    ctx->pc = 0x184A94u;
label_184a94:
    // 0x184a94: 0x926c2
    ctx->pc = 0x184a94u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 27));
label_184a98:
    // 0x184a98: 0xc0482d
    ctx->pc = 0x184a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_184a9c:
    // 0x184a9c: 0x81060000
    ctx->pc = 0x184a9cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_184aa0:
    // 0x184aa0: 0x25080001
    ctx->pc = 0x184aa0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_184aa4:
    // 0x184aa4: 0x91020000
    ctx->pc = 0x184aa4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_184aa8:
    // 0x184aa8: 0x63200
    ctx->pc = 0x184aa8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_184aac:
    // 0x184aac: 0x25080001
    ctx->pc = 0x184aacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_184ab0:
    // 0x184ab0: 0xc23025
    ctx->pc = 0x184ab0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_184ab4:
    // 0x184ab4: 0x91030000
    ctx->pc = 0x184ab4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_184ab8:
    // 0x184ab8: 0x25080001
    ctx->pc = 0x184ab8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_184abc:
    // 0x184abc: 0x63200
    ctx->pc = 0x184abcu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_184ac0:
    // 0x184ac0: 0x91020000
    ctx->pc = 0x184ac0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_184ac4:
    // 0x184ac4: 0xc33025
    ctx->pc = 0x184ac4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_184ac8:
    // 0x184ac8: 0x63200
    ctx->pc = 0x184ac8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 8));
label_184acc:
    // 0x184acc: 0x25080001
    ctx->pc = 0x184accu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_184ad0:
    // 0x184ad0: 0x10000003
label_184ad4:
    if (ctx->pc == 0x184AD4u) {
        ctx->pc = 0x184AD4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x184AD8u;
        goto label_184ad8;
    }
    ctx->pc = 0x184AD0u;
    {
        const bool branch_taken_0x184ad0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184AD4u;
        SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x184ad0) {
            ctx->pc = 0x184AE0u;
            goto label_184ae0;
        }
    }
    ctx->pc = 0x184AD8u;
label_184ad8:
    // 0x184ad8: 0x24e70005
    ctx->pc = 0x184ad8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 5));
label_184adc:
    // 0x184adc: 0x94940
    ctx->pc = 0x184adcu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 5));
label_184ae0:
    // 0x184ae0: 0xae040250
    ctx->pc = 0x184ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
label_184ae4:
    // 0x184ae4: 0x8e020234
    ctx->pc = 0x184ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_184ae8:
    // 0x184ae8: 0x200202d
    ctx->pc = 0x184ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_184aec:
    // 0x184aec: 0xae090000
    ctx->pc = 0x184aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
label_184af0:
    // 0x184af0: 0xae060004
    ctx->pc = 0x184af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_184af4:
    // 0x184af4: 0xae070008
    ctx->pc = 0x184af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_184af8:
    // 0x184af8: 0x40f809
label_184afc:
    if (ctx->pc == 0x184AFCu) {
        ctx->pc = 0x184AFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
        ctx->pc = 0x184B00u;
        goto label_184b00;
    }
    ctx->pc = 0x184AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184B00u);
        ctx->pc = 0x184AFCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1848F8u: goto label_1848f8;
            case 0x1848FCu: goto label_1848fc;
            case 0x184900u: goto label_184900;
            case 0x184904u: goto label_184904;
            case 0x184908u: goto label_184908;
            case 0x18490Cu: goto label_18490c;
            case 0x184910u: goto label_184910;
            case 0x184914u: goto label_184914;
            case 0x184918u: goto label_184918;
            case 0x18491Cu: goto label_18491c;
            case 0x184920u: goto label_184920;
            case 0x184924u: goto label_184924;
            case 0x184928u: goto label_184928;
            case 0x18492Cu: goto label_18492c;
            case 0x184930u: goto label_184930;
            case 0x184934u: goto label_184934;
            case 0x184938u: goto label_184938;
            case 0x18493Cu: goto label_18493c;
            case 0x184940u: goto label_184940;
            case 0x184944u: goto label_184944;
            case 0x184948u: goto label_184948;
            case 0x18494Cu: goto label_18494c;
            case 0x184950u: goto label_184950;
            case 0x184954u: goto label_184954;
            case 0x184958u: goto label_184958;
            case 0x18495Cu: goto label_18495c;
            case 0x184960u: goto label_184960;
            case 0x184964u: goto label_184964;
            case 0x184968u: goto label_184968;
            case 0x18496Cu: goto label_18496c;
            case 0x184970u: goto label_184970;
            case 0x184974u: goto label_184974;
            case 0x184978u: goto label_184978;
            case 0x18497Cu: goto label_18497c;
            case 0x184980u: goto label_184980;
            case 0x184984u: goto label_184984;
            case 0x184988u: goto label_184988;
            case 0x18498Cu: goto label_18498c;
            case 0x184990u: goto label_184990;
            case 0x184994u: goto label_184994;
            case 0x184998u: goto label_184998;
            case 0x18499Cu: goto label_18499c;
            case 0x1849A0u: goto label_1849a0;
            case 0x1849A4u: goto label_1849a4;
            case 0x1849A8u: goto label_1849a8;
            case 0x1849ACu: goto label_1849ac;
            case 0x1849B0u: goto label_1849b0;
            case 0x1849B4u: goto label_1849b4;
            case 0x1849B8u: goto label_1849b8;
            case 0x1849BCu: goto label_1849bc;
            case 0x1849C0u: goto label_1849c0;
            case 0x1849C4u: goto label_1849c4;
            case 0x1849C8u: goto label_1849c8;
            case 0x1849CCu: goto label_1849cc;
            case 0x1849D0u: goto label_1849d0;
            case 0x1849D4u: goto label_1849d4;
            case 0x1849D8u: goto label_1849d8;
            case 0x1849DCu: goto label_1849dc;
            case 0x1849E0u: goto label_1849e0;
            case 0x1849E4u: goto label_1849e4;
            case 0x1849E8u: goto label_1849e8;
            case 0x1849ECu: goto label_1849ec;
            case 0x1849F0u: goto label_1849f0;
            case 0x1849F4u: goto label_1849f4;
            case 0x1849F8u: goto label_1849f8;
            case 0x1849FCu: goto label_1849fc;
            case 0x184A00u: goto label_184a00;
            case 0x184A04u: goto label_184a04;
            case 0x184A08u: goto label_184a08;
            case 0x184A0Cu: goto label_184a0c;
            case 0x184A10u: goto label_184a10;
            case 0x184A14u: goto label_184a14;
            case 0x184A18u: goto label_184a18;
            case 0x184A1Cu: goto label_184a1c;
            case 0x184A20u: goto label_184a20;
            case 0x184A24u: goto label_184a24;
            case 0x184A28u: goto label_184a28;
            case 0x184A2Cu: goto label_184a2c;
            case 0x184A30u: goto label_184a30;
            case 0x184A34u: goto label_184a34;
            case 0x184A38u: goto label_184a38;
            case 0x184A3Cu: goto label_184a3c;
            case 0x184A40u: goto label_184a40;
            case 0x184A44u: goto label_184a44;
            case 0x184A48u: goto label_184a48;
            case 0x184A4Cu: goto label_184a4c;
            case 0x184A50u: goto label_184a50;
            case 0x184A54u: goto label_184a54;
            case 0x184A58u: goto label_184a58;
            case 0x184A5Cu: goto label_184a5c;
            case 0x184A60u: goto label_184a60;
            case 0x184A64u: goto label_184a64;
            case 0x184A68u: goto label_184a68;
            case 0x184A6Cu: goto label_184a6c;
            case 0x184A70u: goto label_184a70;
            case 0x184A74u: goto label_184a74;
            case 0x184A78u: goto label_184a78;
            case 0x184A7Cu: goto label_184a7c;
            case 0x184A80u: goto label_184a80;
            case 0x184A84u: goto label_184a84;
            case 0x184A88u: goto label_184a88;
            case 0x184A8Cu: goto label_184a8c;
            case 0x184A90u: goto label_184a90;
            case 0x184A94u: goto label_184a94;
            case 0x184A98u: goto label_184a98;
            case 0x184A9Cu: goto label_184a9c;
            case 0x184AA0u: goto label_184aa0;
            case 0x184AA4u: goto label_184aa4;
            case 0x184AA8u: goto label_184aa8;
            case 0x184AACu: goto label_184aac;
            case 0x184AB0u: goto label_184ab0;
            case 0x184AB4u: goto label_184ab4;
            case 0x184AB8u: goto label_184ab8;
            case 0x184ABCu: goto label_184abc;
            case 0x184AC0u: goto label_184ac0;
            case 0x184AC4u: goto label_184ac4;
            case 0x184AC8u: goto label_184ac8;
            case 0x184ACCu: goto label_184acc;
            case 0x184AD0u: goto label_184ad0;
            case 0x184AD4u: goto label_184ad4;
            case 0x184AD8u: goto label_184ad8;
            case 0x184ADCu: goto label_184adc;
            case 0x184AE0u: goto label_184ae0;
            case 0x184AE4u: goto label_184ae4;
            case 0x184AE8u: goto label_184ae8;
            case 0x184AECu: goto label_184aec;
            case 0x184AF0u: goto label_184af0;
            case 0x184AF4u: goto label_184af4;
            case 0x184AF8u: goto label_184af8;
            case 0x184AFCu: goto label_184afc;
            case 0x184B00u: goto label_184b00;
            case 0x184B04u: goto label_184b04;
            case 0x184B08u: goto label_184b08;
            case 0x184B0Cu: goto label_184b0c;
            case 0x184B10u: goto label_184b10;
            case 0x184B14u: goto label_184b14;
            case 0x184B18u: goto label_184b18;
            case 0x184B1Cu: goto label_184b1c;
            case 0x184B20u: goto label_184b20;
            case 0x184B24u: goto label_184b24;
            case 0x184B28u: goto label_184b28;
            case 0x184B2Cu: goto label_184b2c;
            case 0x184B30u: goto label_184b30;
            case 0x184B34u: goto label_184b34;
            case 0x184B38u: goto label_184b38;
            case 0x184B3Cu: goto label_184b3c;
            case 0x184B40u: goto label_184b40;
            case 0x184B44u: goto label_184b44;
            case 0x184B48u: goto label_184b48;
            case 0x184B4Cu: goto label_184b4c;
            case 0x184B50u: goto label_184b50;
            case 0x184B54u: goto label_184b54;
            case 0x184B58u: goto label_184b58;
            case 0x184B5Cu: goto label_184b5c;
            case 0x184B60u: goto label_184b60;
            case 0x184B64u: goto label_184b64;
            case 0x184B68u: goto label_184b68;
            case 0x184B6Cu: goto label_184b6c;
            case 0x184B70u: goto label_184b70;
            case 0x184B74u: goto label_184b74;
            case 0x184B78u: goto label_184b78;
            case 0x184B7Cu: goto label_184b7c;
            case 0x184B80u: goto label_184b80;
            case 0x184B84u: goto label_184b84;
            case 0x184B88u: goto label_184b88;
            case 0x184B8Cu: goto label_184b8c;
            case 0x184B90u: goto label_184b90;
            case 0x184B94u: goto label_184b94;
            case 0x184B98u: goto label_184b98;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184B00u; }
            if (ctx->pc != 0x184B00u) { return; }
        }
    }
    ctx->pc = 0x184B00u;
label_184b00:
    // 0x184b00: 0x8e03023c
    ctx->pc = 0x184b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 572)));
label_184b04:
    // 0x184b04: 0x60f809
label_184b08:
    if (ctx->pc == 0x184B08u) {
        ctx->pc = 0x184B08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184B0Cu;
        goto label_184b0c;
    }
    ctx->pc = 0x184B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184B0Cu);
        ctx->pc = 0x184B08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1848F8u: goto label_1848f8;
            case 0x1848FCu: goto label_1848fc;
            case 0x184900u: goto label_184900;
            case 0x184904u: goto label_184904;
            case 0x184908u: goto label_184908;
            case 0x18490Cu: goto label_18490c;
            case 0x184910u: goto label_184910;
            case 0x184914u: goto label_184914;
            case 0x184918u: goto label_184918;
            case 0x18491Cu: goto label_18491c;
            case 0x184920u: goto label_184920;
            case 0x184924u: goto label_184924;
            case 0x184928u: goto label_184928;
            case 0x18492Cu: goto label_18492c;
            case 0x184930u: goto label_184930;
            case 0x184934u: goto label_184934;
            case 0x184938u: goto label_184938;
            case 0x18493Cu: goto label_18493c;
            case 0x184940u: goto label_184940;
            case 0x184944u: goto label_184944;
            case 0x184948u: goto label_184948;
            case 0x18494Cu: goto label_18494c;
            case 0x184950u: goto label_184950;
            case 0x184954u: goto label_184954;
            case 0x184958u: goto label_184958;
            case 0x18495Cu: goto label_18495c;
            case 0x184960u: goto label_184960;
            case 0x184964u: goto label_184964;
            case 0x184968u: goto label_184968;
            case 0x18496Cu: goto label_18496c;
            case 0x184970u: goto label_184970;
            case 0x184974u: goto label_184974;
            case 0x184978u: goto label_184978;
            case 0x18497Cu: goto label_18497c;
            case 0x184980u: goto label_184980;
            case 0x184984u: goto label_184984;
            case 0x184988u: goto label_184988;
            case 0x18498Cu: goto label_18498c;
            case 0x184990u: goto label_184990;
            case 0x184994u: goto label_184994;
            case 0x184998u: goto label_184998;
            case 0x18499Cu: goto label_18499c;
            case 0x1849A0u: goto label_1849a0;
            case 0x1849A4u: goto label_1849a4;
            case 0x1849A8u: goto label_1849a8;
            case 0x1849ACu: goto label_1849ac;
            case 0x1849B0u: goto label_1849b0;
            case 0x1849B4u: goto label_1849b4;
            case 0x1849B8u: goto label_1849b8;
            case 0x1849BCu: goto label_1849bc;
            case 0x1849C0u: goto label_1849c0;
            case 0x1849C4u: goto label_1849c4;
            case 0x1849C8u: goto label_1849c8;
            case 0x1849CCu: goto label_1849cc;
            case 0x1849D0u: goto label_1849d0;
            case 0x1849D4u: goto label_1849d4;
            case 0x1849D8u: goto label_1849d8;
            case 0x1849DCu: goto label_1849dc;
            case 0x1849E0u: goto label_1849e0;
            case 0x1849E4u: goto label_1849e4;
            case 0x1849E8u: goto label_1849e8;
            case 0x1849ECu: goto label_1849ec;
            case 0x1849F0u: goto label_1849f0;
            case 0x1849F4u: goto label_1849f4;
            case 0x1849F8u: goto label_1849f8;
            case 0x1849FCu: goto label_1849fc;
            case 0x184A00u: goto label_184a00;
            case 0x184A04u: goto label_184a04;
            case 0x184A08u: goto label_184a08;
            case 0x184A0Cu: goto label_184a0c;
            case 0x184A10u: goto label_184a10;
            case 0x184A14u: goto label_184a14;
            case 0x184A18u: goto label_184a18;
            case 0x184A1Cu: goto label_184a1c;
            case 0x184A20u: goto label_184a20;
            case 0x184A24u: goto label_184a24;
            case 0x184A28u: goto label_184a28;
            case 0x184A2Cu: goto label_184a2c;
            case 0x184A30u: goto label_184a30;
            case 0x184A34u: goto label_184a34;
            case 0x184A38u: goto label_184a38;
            case 0x184A3Cu: goto label_184a3c;
            case 0x184A40u: goto label_184a40;
            case 0x184A44u: goto label_184a44;
            case 0x184A48u: goto label_184a48;
            case 0x184A4Cu: goto label_184a4c;
            case 0x184A50u: goto label_184a50;
            case 0x184A54u: goto label_184a54;
            case 0x184A58u: goto label_184a58;
            case 0x184A5Cu: goto label_184a5c;
            case 0x184A60u: goto label_184a60;
            case 0x184A64u: goto label_184a64;
            case 0x184A68u: goto label_184a68;
            case 0x184A6Cu: goto label_184a6c;
            case 0x184A70u: goto label_184a70;
            case 0x184A74u: goto label_184a74;
            case 0x184A78u: goto label_184a78;
            case 0x184A7Cu: goto label_184a7c;
            case 0x184A80u: goto label_184a80;
            case 0x184A84u: goto label_184a84;
            case 0x184A88u: goto label_184a88;
            case 0x184A8Cu: goto label_184a8c;
            case 0x184A90u: goto label_184a90;
            case 0x184A94u: goto label_184a94;
            case 0x184A98u: goto label_184a98;
            case 0x184A9Cu: goto label_184a9c;
            case 0x184AA0u: goto label_184aa0;
            case 0x184AA4u: goto label_184aa4;
            case 0x184AA8u: goto label_184aa8;
            case 0x184AACu: goto label_184aac;
            case 0x184AB0u: goto label_184ab0;
            case 0x184AB4u: goto label_184ab4;
            case 0x184AB8u: goto label_184ab8;
            case 0x184ABCu: goto label_184abc;
            case 0x184AC0u: goto label_184ac0;
            case 0x184AC4u: goto label_184ac4;
            case 0x184AC8u: goto label_184ac8;
            case 0x184ACCu: goto label_184acc;
            case 0x184AD0u: goto label_184ad0;
            case 0x184AD4u: goto label_184ad4;
            case 0x184AD8u: goto label_184ad8;
            case 0x184ADCu: goto label_184adc;
            case 0x184AE0u: goto label_184ae0;
            case 0x184AE4u: goto label_184ae4;
            case 0x184AE8u: goto label_184ae8;
            case 0x184AECu: goto label_184aec;
            case 0x184AF0u: goto label_184af0;
            case 0x184AF4u: goto label_184af4;
            case 0x184AF8u: goto label_184af8;
            case 0x184AFCu: goto label_184afc;
            case 0x184B00u: goto label_184b00;
            case 0x184B04u: goto label_184b04;
            case 0x184B08u: goto label_184b08;
            case 0x184B0Cu: goto label_184b0c;
            case 0x184B10u: goto label_184b10;
            case 0x184B14u: goto label_184b14;
            case 0x184B18u: goto label_184b18;
            case 0x184B1Cu: goto label_184b1c;
            case 0x184B20u: goto label_184b20;
            case 0x184B24u: goto label_184b24;
            case 0x184B28u: goto label_184b28;
            case 0x184B2Cu: goto label_184b2c;
            case 0x184B30u: goto label_184b30;
            case 0x184B34u: goto label_184b34;
            case 0x184B38u: goto label_184b38;
            case 0x184B3Cu: goto label_184b3c;
            case 0x184B40u: goto label_184b40;
            case 0x184B44u: goto label_184b44;
            case 0x184B48u: goto label_184b48;
            case 0x184B4Cu: goto label_184b4c;
            case 0x184B50u: goto label_184b50;
            case 0x184B54u: goto label_184b54;
            case 0x184B58u: goto label_184b58;
            case 0x184B5Cu: goto label_184b5c;
            case 0x184B60u: goto label_184b60;
            case 0x184B64u: goto label_184b64;
            case 0x184B68u: goto label_184b68;
            case 0x184B6Cu: goto label_184b6c;
            case 0x184B70u: goto label_184b70;
            case 0x184B74u: goto label_184b74;
            case 0x184B78u: goto label_184b78;
            case 0x184B7Cu: goto label_184b7c;
            case 0x184B80u: goto label_184b80;
            case 0x184B84u: goto label_184b84;
            case 0x184B88u: goto label_184b88;
            case 0x184B8Cu: goto label_184b8c;
            case 0x184B90u: goto label_184b90;
            case 0x184B94u: goto label_184b94;
            case 0x184B98u: goto label_184b98;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184B0Cu; }
            if (ctx->pc != 0x184B0Cu) { return; }
        }
    }
    ctx->pc = 0x184B0Cu;
label_184b0c:
    // 0x184b0c: 0x8e090000
    ctx->pc = 0x184b0cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_184b10:
    // 0x184b10: 0x8e060004
    ctx->pc = 0x184b10u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_184b14:
    // 0x184b14: 0x8e070008
    ctx->pc = 0x184b14u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_184b18:
    // 0x184b18: 0x8e08000c
    ctx->pc = 0x184b18u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_184b1c:
    // 0x184b1c: 0x28e2000a
    ctx->pc = 0x184b1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 10));
label_184b20:
    // 0x184b20: 0x14400005
label_184b24:
    if (ctx->pc == 0x184B24u) {
        ctx->pc = 0x184B24u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 9));
        ctx->pc = 0x184B28u;
        goto label_184b28;
    }
    ctx->pc = 0x184B20u;
    {
        const bool branch_taken_0x184b20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184B24u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 9));
        if (branch_taken_0x184b20) {
            ctx->pc = 0x184B38u;
            goto label_184b38;
        }
    }
    ctx->pc = 0x184B28u;
label_184b28:
    // 0x184b28: 0x24020029
    ctx->pc = 0x184b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_184b2c:
    // 0x184b2c: 0x471023
    ctx->pc = 0x184b2cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_184b30:
    // 0x184b30: 0x461006
    ctx->pc = 0x184b30u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
label_184b34:
    // 0x184b34: 0x822025
    ctx->pc = 0x184b34u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_184b38:
    // 0x184b38: 0x1480ff7b
label_184b3c:
    if (ctx->pc == 0x184B3Cu) {
        ctx->pc = 0x184B3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x184B40u;
        goto label_184b40;
    }
    ctx->pc = 0x184B38u;
    {
        const bool branch_taken_0x184b38 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x184B3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x184b38) {
            ctx->pc = 0x184928u;
            goto label_184928;
        }
    }
    ctx->pc = 0x184B40u;
label_184b40:
    // 0x184b40: 0x24e20007
    ctx->pc = 0x184b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 7));
label_184b44:
    // 0x184b44: 0x8e230000
    ctx->pc = 0x184b44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_184b48:
    // 0x184b48: 0x210c3
    ctx->pc = 0x184b48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_184b4c:
    // 0x184b4c: 0x8e470000
    ctx->pc = 0x184b4cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_184b50:
    // 0x184b50: 0x2442fff8
    ctx->pc = 0x184b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_184b54:
    // 0x184b54: 0x240202d
    ctx->pc = 0x184b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_184b58:
    // 0x184b58: 0x1021021
    ctx->pc = 0x184b58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_184b5c:
    // 0x184b5c: 0x260282d
    ctx->pc = 0x184b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184b60:
    // 0x184b60: 0x473823
    ctx->pc = 0x184b60u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_184b64:
    // 0x184b64: 0xae420000
    ctx->pc = 0x184b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_184b68:
    // 0x184b68: 0x671821
    ctx->pc = 0x184b68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_184b6c:
    // 0x184b6c: 0x220302d
    ctx->pc = 0x184b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184b70:
    // 0x184b70: 0xae230000
    ctx->pc = 0x184b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_184b74:
    // 0x184b74: 0xdfbf0040
    ctx->pc = 0x184b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_184b78:
    // 0x184b78: 0x8e620000
    ctx->pc = 0x184b78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_184b7c:
    // 0x184b7c: 0xdfb20020
    ctx->pc = 0x184b7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_184b80:
    // 0x184b80: 0x471023
    ctx->pc = 0x184b80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_184b84:
    // 0x184b84: 0xdfb10010
    ctx->pc = 0x184b84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_184b88:
    // 0x184b88: 0xae620000
    ctx->pc = 0x184b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_184b8c:
    // 0x184b8c: 0xdfb30030
    ctx->pc = 0x184b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_184b90:
    // 0x184b90: 0xdfb00000
    ctx->pc = 0x184b90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_184b94:
    // 0x184b94: 0x8061e32
label_184b98:
    if (ctx->pc == 0x184B98u) {
        ctx->pc = 0x184B98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x184B9Cu;
        goto label_fallthrough_0x184b94;
    }
    ctx->pc = 0x184B94u;
    ctx->pc = 0x184B98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x1878C8u;
    MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime); return;
label_fallthrough_0x184b94:
    ctx->pc = 0x184B9Cu;
}
