#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MallocInit
// Address: 0x1a1a10 - 0x1a1c24
void MallocInit_0x1a1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MallocInit");


    ctx->pc = 0x1a1a10u;

    // 0x1a1a10: 0x27bdffb0
    ctx->pc = 0x1a1a10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1a14: 0x7fbf0040
    ctx->pc = 0x1a1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1a1a18: 0x7fb30030
    ctx->pc = 0x1a1a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1a1c: 0x7fb20020
    ctx->pc = 0x1a1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1a20: 0x7fb10010
    ctx->pc = 0x1a1a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a1a24: 0x7fb00000
    ctx->pc = 0x1a1a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1a28: 0x8f8483d8
    ctx->pc = 0x1a1a28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935512)));
    // 0x1a1a2c: 0x3c030051
    ctx->pc = 0x1a1a2cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a1a30: 0x24635040
    ctx->pc = 0x1a1a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20544));
    // 0x1a1a34: 0x3065000c
    ctx->pc = 0x1a1a34u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 12));
    // 0x1a1a38: 0x70008628
    ctx->pc = 0x1a1a38u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1a3c: 0x831823
    ctx->pc = 0x1a1a3cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1a40: 0x14a00003
    ctx->pc = 0x1A1A40u;
    {
        const bool branch_taken_0x1a1a40 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1A44u;
        SET_GPR_U32(ctx, 17, SRL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1a1a40) {
            ctx->pc = 0x1A1A50u;
            goto label_1a1a50;
        }
    }
    ctx->pc = 0x1A1A48u;
    // 0x1a1a48: 0x10000009
    ctx->pc = 0x1A1A48u;
    {
        const bool branch_taken_0x1a1a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1A4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a1a48) {
            ctx->pc = 0x1A1A70u;
            goto label_1a1a70;
        }
    }
    ctx->pc = 0x1A1A50u;
label_1a1a50:
    // 0x1a1a50: 0x24030008
    ctx->pc = 0x1a1a50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a1a54: 0x14a30003
    ctx->pc = 0x1A1A54u;
    {
        const bool branch_taken_0x1a1a54 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        ctx->pc = 0x1A1A58u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1a1a54) {
            ctx->pc = 0x1A1A64u;
            goto label_1a1a64;
        }
    }
    ctx->pc = 0x1A1A5Cu;
    // 0x1a1a5c: 0x10000004
    ctx->pc = 0x1A1A5Cu;
    {
        const bool branch_taken_0x1a1a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1A60u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1a1a5c) {
            ctx->pc = 0x1A1A70u;
            goto label_1a1a70;
        }
    }
    ctx->pc = 0x1A1A64u;
label_1a1a64:
    // 0x1a1a64: 0x14a30002
    ctx->pc = 0x1A1A64u;
    {
        const bool branch_taken_0x1a1a64 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1a1a64) {
            ctx->pc = 0x1A1A70u;
            goto label_1a1a70;
        }
    }
    ctx->pc = 0x1A1A6Cu;
    // 0x1a1a6c: 0x24100002
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_1a1a70:
    // 0x1a1a70: 0x3c010051
    ctx->pc = 0x1a1a70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1a74: 0x8c235040
    ctx->pc = 0x1a1a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 20544)));
    // 0x1a1a78: 0x10600012
    ctx->pc = 0x1A1A78u;
    {
        const bool branch_taken_0x1a1a78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a1a78) {
            ctx->pc = 0x1A1AC4u;
            goto label_1a1ac4;
        }
    }
    ctx->pc = 0x1A1A80u;
    // 0x1a1a80: 0x3c030051
    ctx->pc = 0x1a1a80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x1a1a84: 0x24725040
    ctx->pc = 0x1a1a84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 20544));
label_1a1a88:
    // 0x1a1a88: 0x8e530000
    ctx->pc = 0x1a1a88u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a1a8c: 0x16600005
    ctx->pc = 0x1A1A8Cu;
    {
        const bool branch_taken_0x1a1a8c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1A90u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a1a8c) {
            ctx->pc = 0x1A1AA4u;
            goto label_1a1aa4;
        }
    }
    ctx->pc = 0x1A1A94u;
    // 0x1a1a94: 0x3c020026
    ctx->pc = 0x1a1a94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a1a98: 0xc07d01c
    ctx->pc = 0x1A1A98u;
    SET_GPR_U32(ctx, 31, 0x1A1AA0u);
    ctx->pc = 0x1A1A9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959008));
    ctx->pc = 0x1F4070u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___am1FatalError_0x1f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AA0u; }
        else if (ctx->pc != 0x1A1AA0u) { ctx->pc = 0x1A1AA0u; }
    }
    if (ctx->pc != 0x1A1AA0u) { return; }
    ctx->pc = 0x1A1AA0u;
    // 0x1a1aa0: 0x24030001
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1a1aa4:
    // 0x1a1aa4: 0x12630007
    ctx->pc = 0x1A1AA4u;
    {
        const bool branch_taken_0x1a1aa4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a1aa4) {
            ctx->pc = 0x1A1AC4u;
            goto label_1a1ac4;
        }
    }
    ctx->pc = 0x1A1AACu;
    // 0x1a1aac: 0x6610002
    ctx->pc = 0x1A1AACu;
    {
        const bool branch_taken_0x1a1aac = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1A1AB0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1a1aac) {
            ctx->pc = 0x1A1AB8u;
            goto label_1a1ab8;
        }
    }
    ctx->pc = 0x1A1AB4u;
    // 0x1a1ab4: 0x139823
    ctx->pc = 0x1a1ab4u;
    SET_GPR_U32(ctx, 19, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_1a1ab8:
    // 0x1a1ab8: 0x131880
    ctx->pc = 0x1a1ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
    // 0x1a1abc: 0x1000fff2
    ctx->pc = 0x1A1ABCu;
    {
        const bool branch_taken_0x1a1abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1AC0u;
        SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        if (branch_taken_0x1a1abc) {
            ctx->pc = 0x1A1A88u;
            goto label_1a1a88;
        }
    }
    ctx->pc = 0x1A1AC4u;
label_1a1ac4:
    // 0x1a1ac4: 0x3c010030
    ctx->pc = 0x1a1ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1ac8: 0xac2020f0
    ctx->pc = 0x1a1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8432), GPR_U32(ctx, 0));
    // 0x1a1acc: 0x3c010030
    ctx->pc = 0x1a1accu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1ad0: 0xac202110
    ctx->pc = 0x1a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8464), GPR_U32(ctx, 0));
    // 0x1a1ad4: 0x3c010030
    ctx->pc = 0x1a1ad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1ad8: 0xac2020f4
    ctx->pc = 0x1a1ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8436), GPR_U32(ctx, 0));
    // 0x1a1adc: 0x3c010030
    ctx->pc = 0x1a1adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1ae0: 0xac202114
    ctx->pc = 0x1a1ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8468), GPR_U32(ctx, 0));
    // 0x1a1ae4: 0x3c010030
    ctx->pc = 0x1a1ae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1ae8: 0xac2020f8
    ctx->pc = 0x1a1ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8440), GPR_U32(ctx, 0));
    // 0x1a1aec: 0x3c010030
    ctx->pc = 0x1a1aecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1af0: 0xac202118
    ctx->pc = 0x1a1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8472), GPR_U32(ctx, 0));
    // 0x1a1af4: 0x3c010030
    ctx->pc = 0x1a1af4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1af8: 0xac2020fc
    ctx->pc = 0x1a1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8444), GPR_U32(ctx, 0));
    // 0x1a1afc: 0x3c010030
    ctx->pc = 0x1a1afcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b00: 0xac20211c
    ctx->pc = 0x1a1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8476), GPR_U32(ctx, 0));
    // 0x1a1b04: 0x3c010030
    ctx->pc = 0x1a1b04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b08: 0xac202100
    ctx->pc = 0x1a1b08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8448), GPR_U32(ctx, 0));
    // 0x1a1b0c: 0x3c010030
    ctx->pc = 0x1a1b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b10: 0xac202120
    ctx->pc = 0x1a1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8480), GPR_U32(ctx, 0));
    // 0x1a1b14: 0x3c010030
    ctx->pc = 0x1a1b14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b18: 0xac202104
    ctx->pc = 0x1a1b18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8452), GPR_U32(ctx, 0));
    // 0x1a1b1c: 0x3c010030
    ctx->pc = 0x1a1b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b20: 0xac202124
    ctx->pc = 0x1a1b20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8484), GPR_U32(ctx, 0));
    // 0x1a1b24: 0x3c010030
    ctx->pc = 0x1a1b24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b28: 0xac202108
    ctx->pc = 0x1a1b28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8456), GPR_U32(ctx, 0));
    // 0x1a1b2c: 0x3c010030
    ctx->pc = 0x1a1b2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b30: 0xac202128
    ctx->pc = 0x1a1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8488), GPR_U32(ctx, 0));
    // 0x1a1b34: 0x3c010030
    ctx->pc = 0x1a1b34u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b38: 0xac20210c
    ctx->pc = 0x1a1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8460), GPR_U32(ctx, 0));
    // 0x1a1b3c: 0x3c010030
    ctx->pc = 0x1a1b3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a1b40: 0xac20212c
    ctx->pc = 0x1a1b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8492), GPR_U32(ctx, 0));
    // 0x1a1b44: 0x26040004
    ctx->pc = 0x1a1b44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a1b48: 0x3c010051
    ctx->pc = 0x1a1b48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1b4c: 0xac245040
    ctx->pc = 0x1a1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20544), GPR_U32(ctx, 4));
    // 0x1a1b50: 0x3c010051
    ctx->pc = 0x1a1b50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1b54: 0xac245044
    ctx->pc = 0x1a1b54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20548), GPR_U32(ctx, 4));
    // 0x1a1b58: 0x3c010051
    ctx->pc = 0x1a1b58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1b5c: 0xac245048
    ctx->pc = 0x1a1b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20552), GPR_U32(ctx, 4));
    // 0x1a1b60: 0x3c010051
    ctx->pc = 0x1a1b60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1a1b64: 0x42880
    ctx->pc = 0x1a1b64u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1b68: 0x3c040051
    ctx->pc = 0x1a1b68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a1b6c: 0x2487503c
    ctx->pc = 0x1a1b6cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 20540));
    // 0x1a1b70: 0x3c040051
    ctx->pc = 0x1a1b70u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a1b74: 0x8c295040
    ctx->pc = 0x1a1b74u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 20544)));
    // 0x1a1b78: 0x24080001
    ctx->pc = 0x1a1b78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1b7c: 0x113080
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a1b80: 0x2484503c
    ctx->pc = 0x1a1b80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20540));
    // 0x1a1b84: 0x862021
    ctx->pc = 0x1a1b84u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a1b88: 0x26030005
    ctx->pc = 0x1a1b88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 5));
    // 0x1a1b8c: 0x93080
    ctx->pc = 0x1a1b8cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a1b90: 0x2231823
    ctx->pc = 0x1a1b90u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1a1b94: 0xaf808938
    ctx->pc = 0x1a1b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936888), GPR_U32(ctx, 0));
    // 0x1a1b98: 0xaf80893c
    ctx->pc = 0x1a1b98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936892), GPR_U32(ctx, 0));
    // 0x1a1b9c: 0xaf808934
    ctx->pc = 0x1a1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936884), GPR_U32(ctx, 0));
    // 0x1a1ba0: 0xaf88892c
    ctx->pc = 0x1a1ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936876), GPR_U32(ctx, 8));
    // 0x1a1ba4: 0xe63021
    ctx->pc = 0x1a1ba4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1a1ba8: 0xacc90000
    ctx->pc = 0x1a1ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x1a1bac: 0xac880000
    ctx->pc = 0x1a1bacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1a1bb0: 0x3c040051
    ctx->pc = 0x1a1bb0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)81 << 16));
    // 0x1a1bb4: 0x24845040
    ctx->pc = 0x1a1bb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20544));
    // 0x1a1bb8: 0x31823
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1a1bbc: 0x852821
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1bc0: 0xaca30000
    ctx->pc = 0x1a1bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1a1bc4: 0xaca00004
    ctx->pc = 0x1a1bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1a1bc8: 0xaca00008
    ctx->pc = 0x1a1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1a1bcc: 0x8ca60000
    ctx->pc = 0x1a1bccu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1bd0: 0x3c030001
    ctx->pc = 0x1a1bd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x1a1bd4: 0x62023
    ctx->pc = 0x1a1bd4u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1a1bd8: 0x42080
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a1bdc: 0x852021
    ctx->pc = 0x1a1bdcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a1be0: 0xac86fffc
    ctx->pc = 0x1a1be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 6));
    // 0x1a1be4: 0x8ca50000
    ctx->pc = 0x1a1be4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1be8: 0x8f848990
    ctx->pc = 0x1a1be8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
    // 0x1a1bec: 0xaf838950
    ctx->pc = 0x1a1becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U32(ctx, 3));
    // 0x1a1bf0: 0x51823
    ctx->pc = 0x1a1bf0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1a1bf4: 0x10800004
    ctx->pc = 0x1A1BF4u;
    {
        const bool branch_taken_0x1a1bf4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1BF8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936872), GPR_U32(ctx, 3));
        if (branch_taken_0x1a1bf4) {
            ctx->pc = 0x1A1C08u;
            goto label_1a1c08;
        }
    }
    ctx->pc = 0x1A1BFCu;
    // 0x1a1bfc: 0x8c860004
    ctx->pc = 0x1a1bfcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a1c00: 0xc06870c
    ctx->pc = 0x1A1C00u;
    SET_GPR_U32(ctx, 31, 0x1A1C08u);
    ctx->pc = 0x1A1C04u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x1A1C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddFreeBlock0_0x1a1c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1C08u; }
        else if (ctx->pc != 0x1A1C08u) { ctx->pc = 0x1A1C08u; }
    }
    if (ctx->pc != 0x1A1C08u) { return; }
    ctx->pc = 0x1A1C08u;
label_1a1c08:
    // 0x1a1c08: 0x7bbf0040
    ctx->pc = 0x1a1c08u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1c0c: 0x7bb30030
    ctx->pc = 0x1a1c0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1c10: 0x7bb20020
    ctx->pc = 0x1a1c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1c14: 0x7bb10010
    ctx->pc = 0x1a1c14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c18: 0x7bb00000
    ctx->pc = 0x1a1c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c1c: 0x3e00008
    ctx->pc = 0x1A1C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1C20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1A50u: goto label_1a1a50;
            case 0x1A1A64u: goto label_1a1a64;
            case 0x1A1A70u: goto label_1a1a70;
            case 0x1A1A88u: goto label_1a1a88;
            case 0x1A1AA4u: goto label_1a1aa4;
            case 0x1A1AB8u: goto label_1a1ab8;
            case 0x1A1AC4u: goto label_1a1ac4;
            case 0x1A1C08u: goto label_1a1c08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1C24u;
}
