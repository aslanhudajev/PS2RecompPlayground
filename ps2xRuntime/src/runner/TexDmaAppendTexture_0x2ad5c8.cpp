#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TexDmaAppendTexture
// Address: 0x2ad5c8 - 0x2ad718
void TexDmaAppendTexture_0x2ad5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad5c8u;

    // 0x2ad5c8: 0x3c020037
    ctx->pc = 0x2ad5c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad5cc: 0x8c4c295c
    ctx->pc = 0x2ad5ccu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 2), 10588)));
    // 0x2ad5d0: 0x12a5818
    ctx->pc = 0x2ad5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ad5d4: 0x1685818
    ctx->pc = 0x2ad5d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ad5d8: 0x256b0007
    ctx->pc = 0x2ad5d8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 7));
    // 0x2ad5dc: 0x3c020037
    ctx->pc = 0x2ad5dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad5e0: 0x8c4285e8
    ctx->pc = 0x2ad5e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936040)));
    // 0x2ad5e4: 0x15220005
    ctx->pc = 0x2AD5E4u;
    {
        const bool branch_taken_0x2ad5e4 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AD5E8u;
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 5));
        if (branch_taken_0x2ad5e4) {
            ctx->pc = 0x2AD5FCu;
            goto label_2ad5fc;
        }
    }
    ctx->pc = 0x2AD5ECu;
    // 0x2ad5ec: 0x3c020037
    ctx->pc = 0x2ad5ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad5f0: 0x8c4285ec
    ctx->pc = 0x2ad5f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294936044)));
    // 0x2ad5f4: 0x11420006
    ctx->pc = 0x2AD5F4u;
    {
        const bool branch_taken_0x2ad5f4 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 2));
        ctx->pc = 0x2AD5F8u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2ad5f4) {
            ctx->pc = 0x2AD610u;
            goto label_2ad610;
        }
    }
    ctx->pc = 0x2AD5FCu;
label_2ad5fc:
    // 0x2ad5fc: 0x3c020037
    ctx->pc = 0x2ad5fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad600: 0xac4985e8
    ctx->pc = 0x2ad600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936040), GPR_U32(ctx, 9));
    // 0x2ad604: 0x3c020037
    ctx->pc = 0x2ad604u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad608: 0xac4a85ec
    ctx->pc = 0x2ad608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936044), GPR_U32(ctx, 10));
    // 0x2ad60c: 0x240d0003
    ctx->pc = 0x2ad60cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 3));
label_2ad610:
    // 0x2ad610: 0x25ae0002
    ctx->pc = 0x2ad610u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 13), 2));
    // 0x2ad614: 0x180402d
    ctx->pc = 0x2ad614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad618: 0x250c0010
    ctx->pc = 0x2ad618u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 8), 16));
    // 0x2ad61c: 0xe1100
    ctx->pc = 0x2ad61cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 14), 4));
    // 0x2ad620: 0x1827821
    ctx->pc = 0x2ad620u;
    SET_GPR_U32(ctx, 15, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2ad624: 0x3c022000
    ctx->pc = 0x2ad624u;
    SET_GPR_U32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x2ad628: 0x1c21025
    ctx->pc = 0x2ad628u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2ad62c: 0xad020000
    ctx->pc = 0x2ad62cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2ad630: 0x25080004
    ctx->pc = 0x2ad630u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ad634: 0x3c020fff
    ctx->pc = 0x2ad634u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x2ad638: 0x3442ffff
    ctx->pc = 0x2ad638u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2ad63c: 0x1e21024
    ctx->pc = 0x2ad63cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x2ad640: 0xad020000
    ctx->pc = 0x2ad640u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2ad644: 0x25080004
    ctx->pc = 0x2ad644u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ad648: 0xad000000
    ctx->pc = 0x2ad648u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2ad64c: 0xad000004
    ctx->pc = 0x2ad64cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2ad650: 0x180402d
    ctx->pc = 0x2ad650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad654: 0xad0d0000
    ctx->pc = 0x2ad654u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
    // 0x2ad658: 0x3c021000
    ctx->pc = 0x2ad658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ad65c: 0xad020004
    ctx->pc = 0x2ad65cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2ad660: 0x2402000e
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ad664: 0xad020008
    ctx->pc = 0x2ad664u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x2ad668: 0xad000010
    ctx->pc = 0x2ad668u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x2ad66c: 0x61400
    ctx->pc = 0x2ad66cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2ad670: 0xa21025
    ctx->pc = 0x2ad670u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ad674: 0x71e00
    ctx->pc = 0x2ad674u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 24));
    // 0x2ad678: 0x431025
    ctx->pc = 0x2ad678u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad67c: 0xad020014
    ctx->pc = 0x2ad67cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x2ad680: 0x24020050
    ctx->pc = 0x2ad680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad684: 0xfd020018
    ctx->pc = 0x2ad684u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x2ad688: 0x24020003
    ctx->pc = 0x2ad688u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad68c: 0x15a20006
    ctx->pc = 0x2AD68Cu;
    {
        const bool branch_taken_0x2ad68c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 2));
        ctx->pc = 0x2AD690u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2ad68c) {
            ctx->pc = 0x2AD6A8u;
            goto label_2ad6a8;
        }
    }
    ctx->pc = 0x2AD694u;
    // 0x2ad694: 0xad090020
    ctx->pc = 0x2ad694u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 9));
    // 0x2ad698: 0xad0a0024
    ctx->pc = 0x2ad698u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 10));
    // 0x2ad69c: 0x24020052
    ctx->pc = 0x2ad69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 82));
    // 0x2ad6a0: 0xfd020028
    ctx->pc = 0x2ad6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x2ad6a4: 0x24050006
    ctx->pc = 0x2ad6a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
label_2ad6a8:
    // 0x2ad6a8: 0x510c0
    ctx->pc = 0x2ad6a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ad6ac: 0x4c1021
    ctx->pc = 0x2ad6acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2ad6b0: 0xfc400000
    ctx->pc = 0x2ad6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2ad6b4: 0x24030053
    ctx->pc = 0x2ad6b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 83));
    // 0x2ad6b8: 0xfc430008
    ctx->pc = 0x2ad6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2ad6bc: 0x24a50002
    ctx->pc = 0x2ad6bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x2ad6c0: 0x510c0
    ctx->pc = 0x2ad6c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ad6c4: 0x1824021
    ctx->pc = 0x2ad6c4u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2ad6c8: 0x35628000
    ctx->pc = 0x2ad6c8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 11), 32768));
    // 0x2ad6cc: 0xad020000
    ctx->pc = 0x2ad6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2ad6d0: 0x3c020800
    ctx->pc = 0x2ad6d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2048 << 16));
    // 0x2ad6d4: 0xad020004
    ctx->pc = 0x2ad6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x2ad6d8: 0x1e0402d
    ctx->pc = 0x2ad6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6dc: 0x3c023000
    ctx->pc = 0x2ad6dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)12288 << 16));
    // 0x2ad6e0: 0x1621025
    ctx->pc = 0x2ad6e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2ad6e4: 0xad020000
    ctx->pc = 0x2ad6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x2ad6e8: 0x25080004
    ctx->pc = 0x2ad6e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ad6ec: 0xad040000
    ctx->pc = 0x2ad6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x2ad6f0: 0x25080004
    ctx->pc = 0x2ad6f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x2ad6f4: 0xad000000
    ctx->pc = 0x2ad6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x2ad6f8: 0xad000004
    ctx->pc = 0x2ad6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x2ad6fc: 0x3c040037
    ctx->pc = 0x2ad6fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
    // 0x2ad700: 0x25c20002
    ctx->pc = 0x2ad700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 14), 2));
    // 0x2ad704: 0x21100
    ctx->pc = 0x2ad704u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ad708: 0x8c83295c
    ctx->pc = 0x2ad708u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 10588)));
    // 0x2ad70c: 0x431021
    ctx->pc = 0x2ad70cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ad710: 0x3e00008
    ctx->pc = 0x2AD710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD714u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 10588), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD5FCu: goto label_2ad5fc;
            case 0x2AD610u: goto label_2ad610;
            case 0x2AD6A8u: goto label_2ad6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD718u;
}
