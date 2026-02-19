#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrintWorldMemSizes
// Address: 0x262ac0 - 0x262c74
void PrintWorldMemSizes_0x262ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262ac0u;

    // 0x262ac0: 0x27bdffa0
    ctx->pc = 0x262ac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x262ac4: 0xffbf0050
    ctx->pc = 0x262ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x262ac8: 0xffb40040
    ctx->pc = 0x262ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x262acc: 0xffb30030
    ctx->pc = 0x262accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262ad0: 0xffb20020
    ctx->pc = 0x262ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262ad4: 0xffb10010
    ctx->pc = 0x262ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262ad8: 0xffb00000
    ctx->pc = 0x262ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262adc: 0x3c03003c
    ctx->pc = 0x262adcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x262ae0: 0x8c623258
    ctx->pc = 0x262ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12888)));
    // 0x262ae4: 0x1040005b
    ctx->pc = 0x262AE4u;
    {
        const bool branch_taken_0x262ae4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262AE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x262ae4) {
            ctx->pc = 0x262C54u;
            goto label_262c54;
        }
    }
    ctx->pc = 0x262AECu;
    // 0x262aec: 0x8c421bd8
    ctx->pc = 0x262aecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7128)));
    // 0x262af0: 0x14400002
    ctx->pc = 0x262AF0u;
    {
        const bool branch_taken_0x262af0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262AF4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262af0) {
            ctx->pc = 0x262AFCu;
            goto label_262afc;
        }
    }
    ctx->pc = 0x262AF8u;
    // 0x262af8: 0xac603258
    ctx->pc = 0x262af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12888), GPR_U32(ctx, 0));
label_262afc:
    // 0x262afc: 0x3c02003c
    ctx->pc = 0x262afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262b00: 0x3c04003b
    ctx->pc = 0x262b00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b04: 0x24849950
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941008));
    // 0x262b08: 0xc0b4a34
    ctx->pc = 0x262B08u;
    SET_GPR_U32(ctx, 31, 0x262B10u);
    ctx->pc = 0x262B0Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12892)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B10u; }
    }
    if (ctx->pc != 0x262B10u) { return; }
    ctx->pc = 0x262B10u;
    // 0x262b10: 0x3c020032
    ctx->pc = 0x262b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x262b14: 0x3c04003b
    ctx->pc = 0x262b14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b18: 0x24849968
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941032));
    // 0x262b1c: 0xc0b4a34
    ctx->pc = 0x262B1Cu;
    SET_GPR_U32(ctx, 31, 0x262B24u);
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966176)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B24u; }
    }
    if (ctx->pc != 0x262B24u) { return; }
    ctx->pc = 0x262B24u;
    // 0x262b24: 0x3c020032
    ctx->pc = 0x262b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x262b28: 0x3c04003b
    ctx->pc = 0x262b28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b2c: 0x24849980
    ctx->pc = 0x262b2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x262b30: 0xc0b4a34
    ctx->pc = 0x262B30u;
    SET_GPR_U32(ctx, 31, 0x262B38u);
    ctx->pc = 0x262B34u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 2224)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B38u; }
    }
    if (ctx->pc != 0x262B38u) { return; }
    ctx->pc = 0x262B38u;
    // 0x262b38: 0x3c020032
    ctx->pc = 0x262b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x262b3c: 0x3c04003b
    ctx->pc = 0x262b3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b40: 0x24849998
    ctx->pc = 0x262b40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941080));
    // 0x262b44: 0xc0b4a34
    ctx->pc = 0x262B44u;
    SET_GPR_U32(ctx, 31, 0x262B4Cu);
    ctx->pc = 0x262B48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966184)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B4Cu; }
    }
    if (ctx->pc != 0x262B4Cu) { return; }
    ctx->pc = 0x262B4Cu;
    // 0x262b4c: 0x3c020032
    ctx->pc = 0x262b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x262b50: 0x3c04003b
    ctx->pc = 0x262b50u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b54: 0x248499b0
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x262b58: 0xc0b4a34
    ctx->pc = 0x262B58u;
    SET_GPR_U32(ctx, 31, 0x262B60u);
    ctx->pc = 0x262B5Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966180)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B60u; }
    }
    if (ctx->pc != 0x262B60u) { return; }
    ctx->pc = 0x262B60u;
    // 0x262b60: 0x3c02003c
    ctx->pc = 0x262b60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262b64: 0x3c04003b
    ctx->pc = 0x262b64u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b68: 0x248499c8
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941128));
    // 0x262b6c: 0xc0b4a34
    ctx->pc = 0x262B6Cu;
    SET_GPR_U32(ctx, 31, 0x262B74u);
    ctx->pc = 0x262B70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12932)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B74u; }
    }
    if (ctx->pc != 0x262B74u) { return; }
    ctx->pc = 0x262B74u;
    // 0x262b74: 0x3c02003c
    ctx->pc = 0x262b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262b78: 0x3c04003b
    ctx->pc = 0x262b78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262b7c: 0x248499e0
    ctx->pc = 0x262b7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941152));
    // 0x262b80: 0xc0b4a34
    ctx->pc = 0x262B80u;
    SET_GPR_U32(ctx, 31, 0x262B88u);
    ctx->pc = 0x262B84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12928)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262B88u; }
    }
    if (ctx->pc != 0x262B88u) { return; }
    ctx->pc = 0x262B88u;
    // 0x262b88: 0x802d
    ctx->pc = 0x262b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b8c: 0x3c02003c
    ctx->pc = 0x262b8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262b90: 0x24433260
    ctx->pc = 0x262b90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12896));
    // 0x262b94: 0x0
    ctx->pc = 0x262b94u;
    // NOP
label_262b98:
    // 0x262b98: 0x101080
    ctx->pc = 0x262b98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x262b9c: 0x431021
    ctx->pc = 0x262b9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262ba0: 0x8c420000
    ctx->pc = 0x262ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262ba4: 0x2228821
    ctx->pc = 0x262ba4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x262ba8: 0x26100001
    ctx->pc = 0x262ba8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x262bac: 0x2a020008
    ctx->pc = 0x262bacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x262bb0: 0x1440fff9
    ctx->pc = 0x262BB0u;
    {
        const bool branch_taken_0x262bb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x262bb0) {
            ctx->pc = 0x262B98u;
            goto label_262b98;
        }
    }
    ctx->pc = 0x262BB8u;
    // 0x262bb8: 0x3c04003b
    ctx->pc = 0x262bb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262bbc: 0x248499f8
    ctx->pc = 0x262bbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941176));
    // 0x262bc0: 0xc0b4a34
    ctx->pc = 0x262BC0u;
    SET_GPR_U32(ctx, 31, 0x262BC8u);
    ctx->pc = 0x262BC4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262BC8u; }
    }
    if (ctx->pc != 0x262BC8u) { return; }
    ctx->pc = 0x262BC8u;
    // 0x262bc8: 0x802d
    ctx->pc = 0x262bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262bcc: 0x3c020034
    ctx->pc = 0x262bccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262bd0: 0x2454e820
    ctx->pc = 0x262bd0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x262bd4: 0x3c02003c
    ctx->pc = 0x262bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262bd8: 0x24533260
    ctx->pc = 0x262bd8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 12896));
    // 0x262bdc: 0x3c12003b
    ctx->pc = 0x262bdcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)59 << 16));
    // 0x262be0: 0x3c020033
    ctx->pc = 0x262be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x262be4: 0x2451d440
    ctx->pc = 0x262be4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294956096));
    // 0x262be8: 0x101880
    ctx->pc = 0x262be8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x262bec: 0x0
    ctx->pc = 0x262becu;
    // NOP
label_262bf0:
    // 0x262bf0: 0x741021
    ctx->pc = 0x262bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x262bf4: 0x8c440000
    ctx->pc = 0x262bf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262bf8: 0x4800008
    ctx->pc = 0x262BF8u;
    {
        const bool branch_taken_0x262bf8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262BFCu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x262bf8) {
            ctx->pc = 0x262C1Cu;
            goto label_262c1c;
        }
    }
    ctx->pc = 0x262C00u;
    // 0x262c00: 0x8c460000
    ctx->pc = 0x262c00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262c04: 0x4c00005
    ctx->pc = 0x262C04u;
    {
        const bool branch_taken_0x262c04 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x262C08u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x262c04) {
            ctx->pc = 0x262C1Cu;
            goto label_262c1c;
        }
    }
    ctx->pc = 0x262C0Cu;
    // 0x262c0c: 0x511021
    ctx->pc = 0x262c0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x262c10: 0x26449a10
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 4294941200));
    // 0x262c14: 0xc0b4a34
    ctx->pc = 0x262C14u;
    SET_GPR_U32(ctx, 31, 0x262C1Cu);
    ctx->pc = 0x262C18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C1Cu; }
    }
    if (ctx->pc != 0x262C1Cu) { return; }
    ctx->pc = 0x262C1Cu;
label_262c1c:
    // 0x262c1c: 0x26100001
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x262c20: 0x2a020008
    ctx->pc = 0x262c20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x262c24: 0x1440fff2
    ctx->pc = 0x262C24u;
    {
        const bool branch_taken_0x262c24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262C28u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x262c24) {
            ctx->pc = 0x262BF0u;
            goto label_262bf0;
        }
    }
    ctx->pc = 0x262C2Cu;
    // 0x262c2c: 0x3c04003b
    ctx->pc = 0x262c2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262c30: 0xc0b4a34
    ctx->pc = 0x262C30u;
    SET_GPR_U32(ctx, 31, 0x262C38u);
    ctx->pc = 0x262C34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941216));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C38u; }
    }
    if (ctx->pc != 0x262C38u) { return; }
    ctx->pc = 0x262C38u;
    // 0x262c38: 0x3c02003a
    ctx->pc = 0x262c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x262c3c: 0x3c04003b
    ctx->pc = 0x262c3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x262c40: 0x24849a40
    ctx->pc = 0x262c40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294941248));
    // 0x262c44: 0xc0b4a34
    ctx->pc = 0x262C44u;
    SET_GPR_U32(ctx, 31, 0x262C4Cu);
    ctx->pc = 0x262C48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262C4Cu; }
    }
    if (ctx->pc != 0x262C4Cu) { return; }
    ctx->pc = 0x262C4Cu;
    // 0x262c4c: 0x3c02003c
    ctx->pc = 0x262c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262c50: 0xac403258
    ctx->pc = 0x262c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12888), GPR_U32(ctx, 0));
label_262c54:
    // 0x262c54: 0xdfbf0050
    ctx->pc = 0x262c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262c58: 0xdfb40040
    ctx->pc = 0x262c58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262c5c: 0xdfb30030
    ctx->pc = 0x262c5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262c60: 0xdfb20020
    ctx->pc = 0x262c60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262c64: 0xdfb10010
    ctx->pc = 0x262c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262c68: 0xdfb00000
    ctx->pc = 0x262c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262c6c: 0x3e00008
    ctx->pc = 0x262C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262C70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262AFCu: goto label_262afc;
            case 0x262B98u: goto label_262b98;
            case 0x262BF0u: goto label_262bf0;
            case 0x262C1Cu: goto label_262c1c;
            case 0x262C54u: goto label_262c54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262C74u;
}
