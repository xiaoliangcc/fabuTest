# Automatically generated by pb2py
# fmt: off
from .. import protobuf as p

if __debug__:
    try:
        from typing import Dict, List  # noqa: F401
        from typing_extensions import Literal  # noqa: F401
    except ImportError:
        pass


class MoneroGetAddress(p.MessageType):
    MESSAGE_WIRE_TYPE = 540

    def __init__(
        self,
        address_n: List[int] = None,
        show_display: bool = None,
        network_type: int = None,
        account: int = None,
        minor: int = None,
        payment_id: bytes = None,
    ) -> None:
        self.address_n = address_n if address_n is not None else []
        self.show_display = show_display
        self.network_type = network_type
        self.account = account
        self.minor = minor
        self.payment_id = payment_id

    @classmethod
    def get_fields(cls) -> Dict:
        return {
            1: ('address_n', p.UVarintType, p.FLAG_REPEATED),
            2: ('show_display', p.BoolType, 0),
            3: ('network_type', p.UVarintType, 0),
            4: ('account', p.UVarintType, 0),
            5: ('minor', p.UVarintType, 0),
            6: ('payment_id', p.BytesType, 0),
        }
