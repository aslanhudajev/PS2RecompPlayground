#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVBDEC_IntraBlock
// Address: 0x182b20 - 0x182c68
void MPVBDEC_IntraBlock_0x182b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVBDEC_IntraBlock");


    ctx->pc = 0x182b20u;

    // 0x182b20: 0x27bdfff0
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x182b24: 0x80582d
    ctx->pc = 0x182b24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b28: 0xffbf0000
    ctx->pc = 0x182b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182b2c: 0xa0682d
    ctx->pc = 0x182b2cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182b30: 0x8d6e0000
    ctx->pc = 0x182b30u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x182b34: 0x8d6c0008
    ctx->pc = 0x182b34u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x182b38: 0x8d680004
    ctx->pc = 0x182b38u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x182b3c: 0xe3c02
    ctx->pc = 0x182b3cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 14), 16));
    // 0x182b40: 0x29820011
    ctx->pc = 0x182b40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 17));
    // 0x182b44: 0x14400005
    ctx->pc = 0x182B44u;
    {
        const bool branch_taken_0x182b44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182B48u;
        SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 11), 12)));
        if (branch_taken_0x182b44) {
            ctx->pc = 0x182B5Cu;
            goto label_182b5c;
        }
    }
    ctx->pc = 0x182B4Cu;
    // 0x182b4c: 0x24020030
    ctx->pc = 0x182b4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x182b50: 0x4c1023
    ctx->pc = 0x182b50u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x182b54: 0x481006
    ctx->pc = 0x182b54u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x182b58: 0xe23825
    ctx->pc = 0x182b58u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_182b5c:
    // 0x182b5c: 0x8da2002c
    ctx->pc = 0x182b5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x182b60: 0x71a42
    ctx->pc = 0x182b60u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 7), 9));
    // 0x182b64: 0x431021
    ctx->pc = 0x182b64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182b68: 0x90460000
    ctx->pc = 0x182b68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182b6c: 0x65102
    ctx->pc = 0x182b6cu;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 6), 4));
    // 0x182b70: 0x11400014
    ctx->pc = 0x182B70u;
    {
        const bool branch_taken_0x182b70 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x182B74u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 15));
        if (branch_taken_0x182b70) {
            ctx->pc = 0x182BC4u;
            goto label_182bc4;
        }
    }
    ctx->pc = 0x182B78u;
    // 0x182b78: 0x8d640030
    ctx->pc = 0x182b78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x182b7c: 0x61040
    ctx->pc = 0x182b7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x182b80: 0xca3021
    ctx->pc = 0x182b80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x182b84: 0x24030010
    ctx->pc = 0x182b84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x182b88: 0x441021
    ctx->pc = 0x182b88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x182b8c: 0x661823
    ctx->pc = 0x182b8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182b90: 0x84450000
    ctx->pc = 0x182b90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182b94: 0x2544ffff
    ctx->pc = 0x182b94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x182b98: 0x24020001
    ctx->pc = 0x182b98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182b9c: 0xe53824
    ctx->pc = 0x182b9cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x182ba0: 0x822004
    ctx->pc = 0x182ba0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x182ba4: 0x673806
    ctx->pc = 0x182ba4u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x182ba8: 0xe41024
    ctx->pc = 0x182ba8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x182bac: 0x14400005
    ctx->pc = 0x182BACu;
    {
        const bool branch_taken_0x182bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182BB0u;
        SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 7), 3));
        if (branch_taken_0x182bac) {
            ctx->pc = 0x182BC4u;
            goto label_182bc4;
        }
    }
    ctx->pc = 0x182BB4u;
    // 0x182bb4: 0x24e30001
    ctx->pc = 0x182bb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 1));
    // 0x182bb8: 0x41040
    ctx->pc = 0x182bb8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x182bbc: 0x623823
    ctx->pc = 0x182bbcu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182bc0: 0x750c0
    ctx->pc = 0x182bc0u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 7), 3));
label_182bc4:
    // 0x182bc4: 0x1866021
    ctx->pc = 0x182bc4u;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x182bc8: 0x29820020
    ctx->pc = 0x182bc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 12), 32));
    // 0x182bcc: 0x14400011
    ctx->pc = 0x182BCCu;
    {
        const bool branch_taken_0x182bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182BD0u;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
        if (branch_taken_0x182bcc) {
            ctx->pc = 0x182C14u;
            goto label_182c14;
        }
    }
    ctx->pc = 0x182BD4u;
    // 0x182bd4: 0x258cffe0
    ctx->pc = 0x182bd4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967264));
    // 0x182bd8: 0x1887004
    ctx->pc = 0x182bd8u;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 12) & 0x1F));
    // 0x182bdc: 0x81280000
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182be0: 0x25290001
    ctx->pc = 0x182be0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182be4: 0x91220000
    ctx->pc = 0x182be4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182be8: 0x84200
    ctx->pc = 0x182be8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182bec: 0x25290001
    ctx->pc = 0x182becu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182bf0: 0x1024025
    ctx->pc = 0x182bf0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x182bf4: 0x91230000
    ctx->pc = 0x182bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182bf8: 0x25290001
    ctx->pc = 0x182bf8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182bfc: 0x84200
    ctx->pc = 0x182bfcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182c00: 0x91220000
    ctx->pc = 0x182c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182c04: 0x1034025
    ctx->pc = 0x182c04u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x182c08: 0x84200
    ctx->pc = 0x182c08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182c0c: 0x25290001
    ctx->pc = 0x182c0cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182c10: 0x1024025
    ctx->pc = 0x182c10u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_182c14:
    // 0x182c14: 0x8da30028
    ctx->pc = 0x182c14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 40)));
    // 0x182c18: 0x160202d
    ctx->pc = 0x182c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c1c: 0x8da7001c
    ctx->pc = 0x182c1cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x182c20: 0x1a0282d
    ctx->pc = 0x182c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c24: 0x8c620000
    ctx->pc = 0x182c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182c28: 0x8d66002c
    ctx->pc = 0x182c28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x182c2c: 0x1425021
    ctx->pc = 0x182c2cu;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x182c30: 0xad69000c
    ctx->pc = 0x182c30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 9));
    // 0x182c34: 0xac6a0000
    ctx->pc = 0x182c34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x182c38: 0xa10c0
    ctx->pc = 0x182c38u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 3));
    // 0x182c3c: 0xada00010
    ctx->pc = 0x182c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x182c40: 0xada00014
    ctx->pc = 0x182c40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x182c44: 0xa4e20000
    ctx->pc = 0x182c44u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x182c48: 0xada60018
    ctx->pc = 0x182c48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 6));
    // 0x182c4c: 0xad6e0000
    ctx->pc = 0x182c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 14));
    // 0x182c50: 0xad680004
    ctx->pc = 0x182c50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 8));
    // 0x182c54: 0xc060bee
    ctx->pc = 0x182C54u;
    SET_GPR_U32(ctx, 31, 0x182C5Cu);
    ctx->pc = 0x182C58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 12));
    ctx->pc = 0x182FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvbdec_IntraAc_0x182fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C5Cu; }
        else if (ctx->pc != 0x182C5Cu) { ctx->pc = 0x182C5Cu; }
    }
    if (ctx->pc != 0x182C5Cu) { return; }
    ctx->pc = 0x182C5Cu;
    // 0x182c5c: 0xdfbf0000
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182c60: 0x3e00008
    ctx->pc = 0x182C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182C64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182B5Cu: goto label_182b5c;
            case 0x182BC4u: goto label_182bc4;
            case 0x182C14u: goto label_182c14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182C68u;
}
