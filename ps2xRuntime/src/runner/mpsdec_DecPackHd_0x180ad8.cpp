#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpsdec_DecPackHd
// Address: 0x180ad8 - 0x180f34
void mpsdec_DecPackHd_0x180ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpsdec_DecPackHd");


    ctx->pc = 0x180ad8u;

    // 0x180ad8: 0x24a20004
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4));
    // 0x180adc: 0x2403fffc
    ctx->pc = 0x180adcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x180ae0: 0x434024
    ctx->pc = 0x180ae0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180ae4: 0x80682d
    ctx->pc = 0x180ae4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ae8: 0x2502fffc
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x180aec: 0x81090000
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180af0: 0x25080001
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180af4: 0xa22823
    ctx->pc = 0x180af4u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x180af8: 0x91030000
    ctx->pc = 0x180af8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180afc: 0x94a00
    ctx->pc = 0x180afcu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x180b00: 0x25080001
    ctx->pc = 0x180b00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b04: 0x528c0
    ctx->pc = 0x180b04u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x180b08: 0x91020000
    ctx->pc = 0x180b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b0c: 0x1234825
    ctx->pc = 0x180b0cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180b10: 0x25080001
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b14: 0x94a00
    ctx->pc = 0x180b14u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x180b18: 0x91030000
    ctx->pc = 0x180b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b1c: 0x1224825
    ctx->pc = 0x180b1cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x180b20: 0x25080001
    ctx->pc = 0x180b20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b24: 0x94a00
    ctx->pc = 0x180b24u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x180b28: 0x81070000
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b2c: 0x1234825
    ctx->pc = 0x180b2cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x180b30: 0x25080001
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b34: 0xa94804
    ctx->pc = 0x180b34u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x180b38: 0x91030000
    ctx->pc = 0x180b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b3c: 0x73a00
    ctx->pc = 0x180b3cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180b40: 0x25080001
    ctx->pc = 0x180b40u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b44: 0x28a4001e
    ctx->pc = 0x180b44u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 5), 30));
    // 0x180b48: 0xe33825
    ctx->pc = 0x180b48u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180b4c: 0x91020000
    ctx->pc = 0x180b4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b50: 0x25080001
    ctx->pc = 0x180b50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b54: 0x73a00
    ctx->pc = 0x180b54u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180b58: 0x91030000
    ctx->pc = 0x180b58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b5c: 0xe23825
    ctx->pc = 0x180b5cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180b60: 0x73a00
    ctx->pc = 0x180b60u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180b64: 0x25080001
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b68: 0x14800019
    ctx->pc = 0x180B68u;
    {
        const bool branch_taken_0x180b68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x180B6Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        if (branch_taken_0x180b68) {
            ctx->pc = 0x180BD0u;
            goto label_180bd0;
        }
    }
    ctx->pc = 0x180B70u;
    // 0x180b70: 0x24a5ffe2
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967266));
    // 0x180b74: 0x10a00005
    ctx->pc = 0x180B74u;
    {
        const bool branch_taken_0x180b74 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180B78u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x180b74) {
            ctx->pc = 0x180B8Cu;
            goto label_180b8c;
        }
    }
    ctx->pc = 0x180B7Cu;
    // 0x180b7c: 0x1224825
    ctx->pc = 0x180b7cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x180b80: 0x96782
    ctx->pc = 0x180b80u;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 9), 30));
    // 0x180b84: 0x10000003
    ctx->pc = 0x180B84u;
    {
        const bool branch_taken_0x180b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180B88u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x180b84) {
            ctx->pc = 0x180B94u;
            goto label_180b94;
        }
    }
    ctx->pc = 0x180B8Cu;
label_180b8c:
    // 0x180b8c: 0x96782
    ctx->pc = 0x180b8cu;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 9), 30));
    // 0x180b90: 0xe0482d
    ctx->pc = 0x180b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180b94:
    // 0x180b94: 0x81070000
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180b98: 0x25080001
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180b9c: 0x91020000
    ctx->pc = 0x180b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180ba0: 0x73a00
    ctx->pc = 0x180ba0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180ba4: 0x25080001
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180ba8: 0xe23825
    ctx->pc = 0x180ba8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180bac: 0x91030000
    ctx->pc = 0x180bacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180bb0: 0x25080001
    ctx->pc = 0x180bb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180bb4: 0x73a00
    ctx->pc = 0x180bb4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180bb8: 0x91020000
    ctx->pc = 0x180bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180bbc: 0xe33825
    ctx->pc = 0x180bbcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180bc0: 0x73a00
    ctx->pc = 0x180bc0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180bc4: 0x25080001
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180bc8: 0x10000004
    ctx->pc = 0x180BC8u;
    {
        const bool branch_taken_0x180bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180BCCu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x180bc8) {
            ctx->pc = 0x180BDCu;
            goto label_180bdc;
        }
    }
    ctx->pc = 0x180BD0u;
label_180bd0:
    // 0x180bd0: 0x96782
    ctx->pc = 0x180bd0u;
    SET_GPR_U32(ctx, 12, SRL32(GPR_U32(ctx, 9), 30));
    // 0x180bd4: 0x24a50002
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x180bd8: 0x94880
    ctx->pc = 0x180bd8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
label_180bdc:
    // 0x180bdc: 0x24a50002
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x180be0: 0x28a20020
    ctx->pc = 0x180be0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180be4: 0x14400011
    ctx->pc = 0x180BE4u;
    {
        const bool branch_taken_0x180be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180BE8u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 2));
        if (branch_taken_0x180be4) {
            ctx->pc = 0x180C2Cu;
            goto label_180c2c;
        }
    }
    ctx->pc = 0x180BECu;
    // 0x180bec: 0x24a5ffe0
    ctx->pc = 0x180becu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x180bf0: 0xa74804
    ctx->pc = 0x180bf0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x180bf4: 0x81070000
    ctx->pc = 0x180bf4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180bf8: 0x25080001
    ctx->pc = 0x180bf8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180bfc: 0x91020000
    ctx->pc = 0x180bfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c00: 0x73a00
    ctx->pc = 0x180c00u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c04: 0x25080001
    ctx->pc = 0x180c04u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c08: 0xe23825
    ctx->pc = 0x180c08u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180c0c: 0x91030000
    ctx->pc = 0x180c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c10: 0x25080001
    ctx->pc = 0x180c10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c14: 0x73a00
    ctx->pc = 0x180c14u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c18: 0x91020000
    ctx->pc = 0x180c18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c1c: 0xe33825
    ctx->pc = 0x180c1cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180c20: 0x73a00
    ctx->pc = 0x180c20u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c24: 0x25080001
    ctx->pc = 0x180c24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c28: 0xe23825
    ctx->pc = 0x180c28u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_180c2c:
    // 0x180c2c: 0x28a2001d
    ctx->pc = 0x180c2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 29));
    // 0x180c30: 0x1440001a
    ctx->pc = 0x180C30u;
    {
        const bool branch_taken_0x180c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180C34u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 29));
        if (branch_taken_0x180c30) {
            ctx->pc = 0x180C9Cu;
            goto label_180c9c;
        }
    }
    ctx->pc = 0x180C38u;
    // 0x180c38: 0x24a5ffe3
    ctx->pc = 0x180c38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x180c3c: 0x10a00007
    ctx->pc = 0x180C3Cu;
    {
        const bool branch_taken_0x180c3c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180C40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x180c3c) {
            ctx->pc = 0x180C5Cu;
            goto label_180c5c;
        }
    }
    ctx->pc = 0x180C44u;
    // 0x180c44: 0x451023
    ctx->pc = 0x180c44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180c48: 0x471006
    ctx->pc = 0x180c48u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x180c4c: 0x1224825
    ctx->pc = 0x180c4cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x180c50: 0x92742
    ctx->pc = 0x180c50u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 9), 29));
    // 0x180c54: 0x10000002
    ctx->pc = 0x180C54u;
    {
        const bool branch_taken_0x180c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180C58u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x180c54) {
            ctx->pc = 0x180C60u;
            goto label_180c60;
        }
    }
    ctx->pc = 0x180C5Cu;
label_180c5c:
    // 0x180c5c: 0xe0482d
    ctx->pc = 0x180c5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180c60:
    // 0x180c60: 0x81070000
    ctx->pc = 0x180c60u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c64: 0x25080001
    ctx->pc = 0x180c64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c68: 0x91020000
    ctx->pc = 0x180c68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c6c: 0x73a00
    ctx->pc = 0x180c6cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c70: 0x25080001
    ctx->pc = 0x180c70u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c74: 0xe23825
    ctx->pc = 0x180c74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180c78: 0x91030000
    ctx->pc = 0x180c78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c7c: 0x25080001
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c80: 0x73a00
    ctx->pc = 0x180c80u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c84: 0x91020000
    ctx->pc = 0x180c84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180c88: 0xe33825
    ctx->pc = 0x180c88u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180c8c: 0x73a00
    ctx->pc = 0x180c8cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180c90: 0x25080001
    ctx->pc = 0x180c90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180c94: 0x10000003
    ctx->pc = 0x180C94u;
    {
        const bool branch_taken_0x180c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180C98u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x180c94) {
            ctx->pc = 0x180CA4u;
            goto label_180ca4;
        }
    }
    ctx->pc = 0x180C9Cu;
label_180c9c:
    // 0x180c9c: 0x24a50003
    ctx->pc = 0x180c9cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 3));
    // 0x180ca0: 0x948c0
    ctx->pc = 0x180ca0u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 3));
label_180ca4:
    // 0x180ca4: 0x24a50001
    ctx->pc = 0x180ca4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x180ca8: 0x28a20020
    ctx->pc = 0x180ca8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180cac: 0x14400011
    ctx->pc = 0x180CACu;
    {
        const bool branch_taken_0x180cac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180CB0u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x180cac) {
            ctx->pc = 0x180CF4u;
            goto label_180cf4;
        }
    }
    ctx->pc = 0x180CB4u;
    // 0x180cb4: 0x24a5ffe0
    ctx->pc = 0x180cb4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x180cb8: 0xa74804
    ctx->pc = 0x180cb8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x180cbc: 0x81070000
    ctx->pc = 0x180cbcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180cc0: 0x25080001
    ctx->pc = 0x180cc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180cc4: 0x91020000
    ctx->pc = 0x180cc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180cc8: 0x73a00
    ctx->pc = 0x180cc8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180ccc: 0x25080001
    ctx->pc = 0x180cccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180cd0: 0xe23825
    ctx->pc = 0x180cd0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180cd4: 0x91030000
    ctx->pc = 0x180cd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180cd8: 0x25080001
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180cdc: 0x73a00
    ctx->pc = 0x180cdcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180ce0: 0x91020000
    ctx->pc = 0x180ce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180ce4: 0xe33825
    ctx->pc = 0x180ce4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180ce8: 0x73a00
    ctx->pc = 0x180ce8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180cec: 0x25080001
    ctx->pc = 0x180cecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180cf0: 0xe23825
    ctx->pc = 0x180cf0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_180cf4:
    // 0x180cf4: 0x28a20011
    ctx->pc = 0x180cf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
    // 0x180cf8: 0x1440001a
    ctx->pc = 0x180CF8u;
    {
        const bool branch_taken_0x180cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180CFCu;
        SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 9), 17));
        if (branch_taken_0x180cf8) {
            ctx->pc = 0x180D64u;
            goto label_180d64;
        }
    }
    ctx->pc = 0x180D00u;
    // 0x180d00: 0x24a5ffef
    ctx->pc = 0x180d00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x180d04: 0x10a00007
    ctx->pc = 0x180D04u;
    {
        const bool branch_taken_0x180d04 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180D08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x180d04) {
            ctx->pc = 0x180D24u;
            goto label_180d24;
        }
    }
    ctx->pc = 0x180D0Cu;
    // 0x180d0c: 0x451023
    ctx->pc = 0x180d0cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180d10: 0x471006
    ctx->pc = 0x180d10u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x180d14: 0x1224825
    ctx->pc = 0x180d14u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x180d18: 0x95c42
    ctx->pc = 0x180d18u;
    SET_GPR_U32(ctx, 11, SRL32(GPR_U32(ctx, 9), 17));
    // 0x180d1c: 0x10000002
    ctx->pc = 0x180D1Cu;
    {
        const bool branch_taken_0x180d1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180D20u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x180d1c) {
            ctx->pc = 0x180D28u;
            goto label_180d28;
        }
    }
    ctx->pc = 0x180D24u;
label_180d24:
    // 0x180d24: 0xe0482d
    ctx->pc = 0x180d24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180d28:
    // 0x180d28: 0x81070000
    ctx->pc = 0x180d28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d2c: 0x25080001
    ctx->pc = 0x180d2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d30: 0x91020000
    ctx->pc = 0x180d30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d34: 0x73a00
    ctx->pc = 0x180d34u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180d38: 0x25080001
    ctx->pc = 0x180d38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d3c: 0xe23825
    ctx->pc = 0x180d3cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180d40: 0x91030000
    ctx->pc = 0x180d40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d44: 0x25080001
    ctx->pc = 0x180d44u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d48: 0x73a00
    ctx->pc = 0x180d48u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180d4c: 0x91020000
    ctx->pc = 0x180d4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d50: 0xe33825
    ctx->pc = 0x180d50u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180d54: 0x73a00
    ctx->pc = 0x180d54u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180d58: 0x25080001
    ctx->pc = 0x180d58u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d5c: 0x10000003
    ctx->pc = 0x180D5Cu;
    {
        const bool branch_taken_0x180d5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180D60u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x180d5c) {
            ctx->pc = 0x180D6Cu;
            goto label_180d6c;
        }
    }
    ctx->pc = 0x180D64u;
label_180d64:
    // 0x180d64: 0x24a5000f
    ctx->pc = 0x180d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15));
    // 0x180d68: 0x94bc0
    ctx->pc = 0x180d68u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 15));
label_180d6c:
    // 0x180d6c: 0x24a50001
    ctx->pc = 0x180d6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x180d70: 0x28a20020
    ctx->pc = 0x180d70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180d74: 0x14400011
    ctx->pc = 0x180D74u;
    {
        const bool branch_taken_0x180d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180D78u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x180d74) {
            ctx->pc = 0x180DBCu;
            goto label_180dbc;
        }
    }
    ctx->pc = 0x180D7Cu;
    // 0x180d7c: 0x24a5ffe0
    ctx->pc = 0x180d7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x180d80: 0xa74804
    ctx->pc = 0x180d80u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x180d84: 0x81070000
    ctx->pc = 0x180d84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d88: 0x25080001
    ctx->pc = 0x180d88u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d8c: 0x91020000
    ctx->pc = 0x180d8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180d90: 0x73a00
    ctx->pc = 0x180d90u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180d94: 0x25080001
    ctx->pc = 0x180d94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180d98: 0xe23825
    ctx->pc = 0x180d98u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180d9c: 0x91030000
    ctx->pc = 0x180d9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180da0: 0x25080001
    ctx->pc = 0x180da0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180da4: 0x73a00
    ctx->pc = 0x180da4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180da8: 0x91020000
    ctx->pc = 0x180da8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180dac: 0xe33825
    ctx->pc = 0x180dacu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180db0: 0x73a00
    ctx->pc = 0x180db0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180db4: 0x25080001
    ctx->pc = 0x180db4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180db8: 0xe23825
    ctx->pc = 0x180db8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_180dbc:
    // 0x180dbc: 0x28a20011
    ctx->pc = 0x180dbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 17));
    // 0x180dc0: 0x1440001a
    ctx->pc = 0x180DC0u;
    {
        const bool branch_taken_0x180dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180DC4u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 9), 17));
        if (branch_taken_0x180dc0) {
            ctx->pc = 0x180E2Cu;
            goto label_180e2c;
        }
    }
    ctx->pc = 0x180DC8u;
    // 0x180dc8: 0x24a5ffef
    ctx->pc = 0x180dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967279));
    // 0x180dcc: 0x10a00007
    ctx->pc = 0x180DCCu;
    {
        const bool branch_taken_0x180dcc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180DD0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x180dcc) {
            ctx->pc = 0x180DECu;
            goto label_180dec;
        }
    }
    ctx->pc = 0x180DD4u;
    // 0x180dd4: 0x451023
    ctx->pc = 0x180dd4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180dd8: 0x471006
    ctx->pc = 0x180dd8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x180ddc: 0x1224825
    ctx->pc = 0x180ddcu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x180de0: 0x95442
    ctx->pc = 0x180de0u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 9), 17));
    // 0x180de4: 0x10000002
    ctx->pc = 0x180DE4u;
    {
        const bool branch_taken_0x180de4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180DE8u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x180de4) {
            ctx->pc = 0x180DF0u;
            goto label_180df0;
        }
    }
    ctx->pc = 0x180DECu;
label_180dec:
    // 0x180dec: 0xe0482d
    ctx->pc = 0x180decu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_180df0:
    // 0x180df0: 0x81070000
    ctx->pc = 0x180df0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180df4: 0x25080001
    ctx->pc = 0x180df4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180df8: 0x91020000
    ctx->pc = 0x180df8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180dfc: 0x73a00
    ctx->pc = 0x180dfcu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e00: 0x25080001
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e04: 0xe23825
    ctx->pc = 0x180e04u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180e08: 0x91030000
    ctx->pc = 0x180e08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e0c: 0x25080001
    ctx->pc = 0x180e0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e10: 0x73a00
    ctx->pc = 0x180e10u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e14: 0x91020000
    ctx->pc = 0x180e14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e18: 0xe33825
    ctx->pc = 0x180e18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180e1c: 0x73a00
    ctx->pc = 0x180e1cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e20: 0x25080001
    ctx->pc = 0x180e20u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e24: 0x10000003
    ctx->pc = 0x180E24u;
    {
        const bool branch_taken_0x180e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180E28u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x180e24) {
            ctx->pc = 0x180E34u;
            goto label_180e34;
        }
    }
    ctx->pc = 0x180E2Cu;
label_180e2c:
    // 0x180e2c: 0x24a5000f
    ctx->pc = 0x180e2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 15));
    // 0x180e30: 0x94bc0
    ctx->pc = 0x180e30u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 15));
label_180e34:
    // 0x180e34: 0x24a50001
    ctx->pc = 0x180e34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x180e38: 0x28a20020
    ctx->pc = 0x180e38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180e3c: 0x14400011
    ctx->pc = 0x180E3Cu;
    {
        const bool branch_taken_0x180e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180E40u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x180e3c) {
            ctx->pc = 0x180E84u;
            goto label_180e84;
        }
    }
    ctx->pc = 0x180E44u;
    // 0x180e44: 0x24a5ffe0
    ctx->pc = 0x180e44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x180e48: 0xa74804
    ctx->pc = 0x180e48u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x180e4c: 0x81070000
    ctx->pc = 0x180e4cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e50: 0x25080001
    ctx->pc = 0x180e50u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e54: 0x91020000
    ctx->pc = 0x180e54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e58: 0x73a00
    ctx->pc = 0x180e58u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e5c: 0x25080001
    ctx->pc = 0x180e5cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e60: 0xe23825
    ctx->pc = 0x180e60u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180e64: 0x91030000
    ctx->pc = 0x180e64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e68: 0x25080001
    ctx->pc = 0x180e68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e6c: 0x73a00
    ctx->pc = 0x180e6cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e70: 0x91020000
    ctx->pc = 0x180e70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180e74: 0xe33825
    ctx->pc = 0x180e74u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180e78: 0x73a00
    ctx->pc = 0x180e78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180e7c: 0x25080001
    ctx->pc = 0x180e7cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180e80: 0xe23825
    ctx->pc = 0x180e80u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_180e84:
    // 0x180e84: 0x24a50001
    ctx->pc = 0x180e84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x180e88: 0x28a20020
    ctx->pc = 0x180e88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180e8c: 0x1440000f
    ctx->pc = 0x180E8Cu;
    {
        const bool branch_taken_0x180e8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180E90u;
        SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x180e8c) {
            ctx->pc = 0x180ECCu;
            goto label_180ecc;
        }
    }
    ctx->pc = 0x180E94u;
    // 0x180e94: 0x24a5ffe0
    ctx->pc = 0x180e94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x180e98: 0xa74804
    ctx->pc = 0x180e98u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x180e9c: 0x81070000
    ctx->pc = 0x180e9cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180ea0: 0x25080001
    ctx->pc = 0x180ea0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180ea4: 0x91020000
    ctx->pc = 0x180ea4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180ea8: 0x73a00
    ctx->pc = 0x180ea8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180eac: 0x25080001
    ctx->pc = 0x180eacu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x180eb0: 0xe23825
    ctx->pc = 0x180eb0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x180eb4: 0x91030000
    ctx->pc = 0x180eb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x180eb8: 0x73a00
    ctx->pc = 0x180eb8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180ebc: 0x91020001
    ctx->pc = 0x180ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x180ec0: 0xe33825
    ctx->pc = 0x180ec0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180ec4: 0x73a00
    ctx->pc = 0x180ec4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x180ec8: 0xe23825
    ctx->pc = 0x180ec8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_180ecc:
    // 0x180ecc: 0x28a2000a
    ctx->pc = 0x180eccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x180ed0: 0x54400009
    ctx->pc = 0x180ED0u;
    {
        const bool branch_taken_0x180ed0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x180ed0) {
            ctx->pc = 0x180ED4u;
            SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 9), 10));
            ctx->pc = 0x180EF8u;
            goto label_180ef8;
        }
    }
    ctx->pc = 0x180ED8u;
    // 0x180ed8: 0x24a5fff6
    ctx->pc = 0x180ed8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x180edc: 0x10a00004
    ctx->pc = 0x180EDCu;
    {
        const bool branch_taken_0x180edc = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x180EE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
        if (branch_taken_0x180edc) {
            ctx->pc = 0x180EF0u;
            goto label_180ef0;
        }
    }
    ctx->pc = 0x180EE4u;
    // 0x180ee4: 0x451023
    ctx->pc = 0x180ee4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x180ee8: 0x471006
    ctx->pc = 0x180ee8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x180eec: 0x1224825
    ctx->pc = 0x180eecu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_180ef0:
    // 0x180ef0: 0x10000002
    ctx->pc = 0x180EF0u;
    {
        const bool branch_taken_0x180ef0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180EF4u;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 9), 10));
        if (branch_taken_0x180ef0) {
            ctx->pc = 0x180EFCu;
            goto label_180efc;
        }
    }
    ctx->pc = 0x180EF8u;
label_180ef8:
    // 0x180ef8: 0x24a50016
    ctx->pc = 0x180ef8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 22));
label_180efc:
    // 0x180efc: 0x24a50001
    ctx->pc = 0x180efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x180f00: 0x28a20020
    ctx->pc = 0x180f00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x180f04: 0xb1340
    ctx->pc = 0x180f04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 13));
    // 0x180f08: 0x42700
    ctx->pc = 0x180f08u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 28));
    // 0x180f0c: 0x822025
    ctx->pc = 0x180f0cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x180f10: 0xa1882
    ctx->pc = 0x180f10u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 2));
    // 0x180f14: 0x832025
    ctx->pc = 0x180f14u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x180f18: 0x2d820001
    ctx->pc = 0x180f18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 12), 1));
    // 0x180f1c: 0xada70008
    ctx->pc = 0x180f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 7));
    // 0x180f20: 0x2403000c
    ctx->pc = 0x180f20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x180f24: 0xada20000
    ctx->pc = 0x180f24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x180f28: 0xada40004
    ctx->pc = 0x180f28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
    // 0x180f2c: 0x3e00008
    ctx->pc = 0x180F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180F30u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180B8Cu: goto label_180b8c;
            case 0x180B94u: goto label_180b94;
            case 0x180BD0u: goto label_180bd0;
            case 0x180BDCu: goto label_180bdc;
            case 0x180C2Cu: goto label_180c2c;
            case 0x180C5Cu: goto label_180c5c;
            case 0x180C60u: goto label_180c60;
            case 0x180C9Cu: goto label_180c9c;
            case 0x180CA4u: goto label_180ca4;
            case 0x180CF4u: goto label_180cf4;
            case 0x180D24u: goto label_180d24;
            case 0x180D28u: goto label_180d28;
            case 0x180D64u: goto label_180d64;
            case 0x180D6Cu: goto label_180d6c;
            case 0x180DBCu: goto label_180dbc;
            case 0x180DECu: goto label_180dec;
            case 0x180DF0u: goto label_180df0;
            case 0x180E2Cu: goto label_180e2c;
            case 0x180E34u: goto label_180e34;
            case 0x180E84u: goto label_180e84;
            case 0x180ECCu: goto label_180ecc;
            case 0x180EF0u: goto label_180ef0;
            case 0x180EF8u: goto label_180ef8;
            case 0x180EFCu: goto label_180efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180F34u;
}
