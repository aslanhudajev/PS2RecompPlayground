#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaBlit
// Address: 0x2a69f0 - 0x2a6b38
void pbDmaBlit_0x2a69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a69f0u;

    // 0x2a69f0: 0x27bdffd0
    ctx->pc = 0x2a69f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a69f4: 0xffbe0020
    ctx->pc = 0x2a69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x2a69f8: 0x3a0f02d
    ctx->pc = 0x2a69f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a69fc: 0xafc40000
    ctx->pc = 0x2a69fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6a00: 0xafc50004
    ctx->pc = 0x2a6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x2a6a04: 0x3c020037
    ctx->pc = 0x2a6a04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a6a08: 0x8c422970
    ctx->pc = 0x2a6a08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10608)));
    // 0x2a6a0c: 0xafc20008
    ctx->pc = 0x2a6a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x2a6a10: 0x8fc20000
    ctx->pc = 0x2a6a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6a14: 0xafc2000c
    ctx->pc = 0x2a6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x2a6a18: 0x8fc20004
    ctx->pc = 0x2a6a18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6a1c: 0x14400003
    ctx->pc = 0x2A6A1Cu;
    {
        const bool branch_taken_0x2a6a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6a1c) {
            ctx->pc = 0x2A6A2Cu;
            goto label_2a6a2c;
        }
    }
    ctx->pc = 0x2A6A24u;
    // 0x2a6a24: 0x1000003f
    ctx->pc = 0x2A6A24u;
    {
        const bool branch_taken_0x2a6a24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6a24) {
            ctx->pc = 0x2A6B24u;
            goto label_2a6b24;
        }
    }
    ctx->pc = 0x2A6A2Cu;
label_2a6a2c:
    // 0x2a6a2c: 0x27c20008
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x2a6a30: 0x8c430000
    ctx->pc = 0x2a6a30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6a34: 0x8fc40004
    ctx->pc = 0x2a6a34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6a38: 0x3c051000
    ctx->pc = 0x2a6a38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2a6a3c: 0x852025
    ctx->pc = 0x2a6a3cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a6a40: 0xac640000
    ctx->pc = 0x2a6a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a6a44: 0x24630004
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a6a48: 0xac430000
    ctx->pc = 0x2a6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6a4c: 0x27c20008
    ctx->pc = 0x2a6a4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x2a6a50: 0x8c430000
    ctx->pc = 0x2a6a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6a54: 0xac600000
    ctx->pc = 0x2a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a6a58: 0x24630004
    ctx->pc = 0x2a6a58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a6a5c: 0xac430000
    ctx->pc = 0x2a6a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6a60: 0x27c20008
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x2a6a64: 0x8c430000
    ctx->pc = 0x2a6a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6a68: 0x3c041000
    ctx->pc = 0x2a6a68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2a6a6c: 0xac640000
    ctx->pc = 0x2a6a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a6a70: 0x24630004
    ctx->pc = 0x2a6a70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a6a74: 0xac430000
    ctx->pc = 0x2a6a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6a78: 0x27c20008
    ctx->pc = 0x2a6a78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x2a6a7c: 0x8c430000
    ctx->pc = 0x2a6a7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6a80: 0x8fc40004
    ctx->pc = 0x2a6a80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6a84: 0x3c055000
    ctx->pc = 0x2a6a84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)20480 << 16));
    // 0x2a6a88: 0x852025
    ctx->pc = 0x2a6a88u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2a6a8c: 0xac640000
    ctx->pc = 0x2a6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2a6a90: 0x24630004
    ctx->pc = 0x2a6a90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a6a94: 0xac430000
    ctx->pc = 0x2a6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6a98: 0xafc00010
    ctx->pc = 0x2a6a98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 0));
    // 0x2a6a9c: 0x0
    ctx->pc = 0x2a6a9cu;
    // NOP
label_2a6aa0:
    // 0x2a6aa0: 0x8fc20004
    ctx->pc = 0x2a6aa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6aa4: 0x40182d
    ctx->pc = 0x2a6aa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6aa8: 0x31080
    ctx->pc = 0x2a6aa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a6aac: 0x8fc30010
    ctx->pc = 0x2a6aacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6ab0: 0x62102a
    ctx->pc = 0x2a6ab0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2a6ab4: 0x14400003
    ctx->pc = 0x2A6AB4u;
    {
        const bool branch_taken_0x2a6ab4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a6ab4) {
            ctx->pc = 0x2A6AC4u;
            goto label_2a6ac4;
        }
    }
    ctx->pc = 0x2A6ABCu;
    // 0x2a6abc: 0x10000010
    ctx->pc = 0x2A6ABCu;
    {
        const bool branch_taken_0x2a6abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6abc) {
            ctx->pc = 0x2A6B00u;
            goto label_2a6b00;
        }
    }
    ctx->pc = 0x2A6AC4u;
label_2a6ac4:
    // 0x2a6ac4: 0x27c20008
    ctx->pc = 0x2a6ac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 8));
    // 0x2a6ac8: 0x8c430000
    ctx->pc = 0x2a6ac8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a6acc: 0x27c4000c
    ctx->pc = 0x2a6accu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 12));
    // 0x2a6ad0: 0x8c850000
    ctx->pc = 0x2a6ad0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a6ad4: 0x8ca60000
    ctx->pc = 0x2a6ad4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a6ad8: 0xac660000
    ctx->pc = 0x2a6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x2a6adc: 0x24a50004
    ctx->pc = 0x2a6adcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a6ae0: 0xac850000
    ctx->pc = 0x2a6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2a6ae4: 0x24630004
    ctx->pc = 0x2a6ae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a6ae8: 0xac430000
    ctx->pc = 0x2a6ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a6aec: 0x8fc20010
    ctx->pc = 0x2a6aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x2a6af0: 0x24430001
    ctx->pc = 0x2a6af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a6af4: 0xafc30010
    ctx->pc = 0x2a6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
    // 0x2a6af8: 0x1000ffe9
    ctx->pc = 0x2A6AF8u;
    {
        const bool branch_taken_0x2a6af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6af8) {
            ctx->pc = 0x2A6AA0u;
            goto label_2a6aa0;
        }
    }
    ctx->pc = 0x2A6B00u;
label_2a6b00:
    // 0x2a6b00: 0x8fc30004
    ctx->pc = 0x2a6b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2a6b04: 0x24620001
    ctx->pc = 0x2a6b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a6b08: 0x40182d
    ctx->pc = 0x2a6b08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b0c: 0x31100
    ctx->pc = 0x2a6b0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a6b10: 0x3c030037
    ctx->pc = 0x2a6b10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a6b14: 0x8c632970
    ctx->pc = 0x2a6b14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 10608)));
    // 0x2a6b18: 0x621021
    ctx->pc = 0x2a6b18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a6b1c: 0x3c010037
    ctx->pc = 0x2a6b1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)55 << 16));
    // 0x2a6b20: 0xac222970
    ctx->pc = 0x2a6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10608), GPR_U32(ctx, 2));
label_2a6b24:
    // 0x2a6b24: 0x3c0e82d
    ctx->pc = 0x2a6b24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b28: 0xdfbe0020
    ctx->pc = 0x2a6b28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6b2c: 0x27bd0030
    ctx->pc = 0x2a6b2cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6b30: 0x3e00008
    ctx->pc = 0x2A6B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6A2Cu: goto label_2a6a2c;
            case 0x2A6AA0u: goto label_2a6aa0;
            case 0x2A6AC4u: goto label_2a6ac4;
            case 0x2A6B00u: goto label_2a6b00;
            case 0x2A6B24u: goto label_2a6b24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A6B38u;
}
